/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** Main file
*/

#include "my.h"
#include <unistd.h>
#include "map.h"
#include "game_info.h"

void display_turn(game_info_t *game)
{
    write(1, "my positions:\n", 14);
    display_map(game->map);
    write(1, "enemy's positions:\n", 19);
    display_map(game->map_enemi);
    game->enemi_play[0] = '\0';
    game->enemi_play[1] = '\0';
    game->enemi_play[2] = '\0';
    game->my_play[0] = '\0';
    game->my_play[1] = '\0';
    game->my_play[2] = '\0';
}

void display_map(char **map)
{
    int x = 0;

    write(1, " |A B C D E F G H\n-+---------------\n", 37);
    while (x < my_array_len(map)) {
        my_put_nbr_no_end(x + 1);
        write(1, "|", 1);
        write_map_line(map[x]);
        write(1, "\n", 1);
        x++;
    }
    write(1, "\n", 1);
}

void write_map_line(char *line)
{
    for (int i = 0; i < 8; i++) {
        if (line[i] == '0')
            write(1, ".", 1);
        if (line[i] == '1')
            write(1, "o", 1);
        if (line[i] == '9')
            write(1, "x", 1);
        if (line[i] != '9' && line[i] != '0' && line[i] != '1')
            write(1, &line[i], 1);
        if (i != 7)
            write(1, " ", 1);
    }
}
