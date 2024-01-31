/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-guillaume.deplaine
** File description:
** attack
*/

#include "game_info.h"
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int is_attacked(char *buff, game_info_t *game_info)
{
    int i = 0;
    int tmp = 0;

    my_putstr("attack: ");
    while (tmp != 3) {
        if (tmp != 0)
            my_putstr("wrong position\nattack: ");
        tmp = read(0, buff, 10000);
        if (tmp == -1)
            return 84;
    }
    if (buff[0] < 'A' || buff[0] > 'H')
        return 84;
    if (buff[1] < '1' || buff[1] > '8')
        return 84;
    if (buff[2] != '\n')
        return 84;
    game_info->my_play[0] = buff[0];
    game_info->my_play[1] = buff[1];
}
