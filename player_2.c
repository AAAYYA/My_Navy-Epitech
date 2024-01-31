/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-guillaume.deplaine
** File description:
** player_2
*/

#include "game_info.h"
#include <signal.h>
#include <unistd.h>
#include "connect.h"
#include <stddef.h>
#include "navy.h"

int turn_2nd_player(struct sigaction *sa, game_info_t *game, bool i)
{
    char buff[8];

    write(1, "waiting for enemy's attack...\n", 31);
    while (game->enemi_play[1] == '\0') {
        sigaction(SIGUSR1, sa, NULL);
        sigaction(SIGUSR2, sa, NULL);
        if (sig_counter.sig2 != 0)
            register_info(game, i);
    }
    if (print_ennemy_attack(game, sa))
        return 0;
    while (is_attacked(buff, game) == 84)
        write(1, "wrong position\n", 16);
    if (print_my_attack(game, sa))
        return 0;
    display_turn(game);
    return 0;
}
