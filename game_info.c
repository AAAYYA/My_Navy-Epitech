/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-guillaume.deplaine
** File description:
** game_info
*/

#include "game_info.h"
#include <stdlib.h>
#include "map.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"

game_info_t *create_game_info(int argc, char **argv)
{
    game_info_t *game = malloc(sizeof(game_info_t));

    if (game == NULL)
        return NULL;
    game->map_enemi = mem_alloc_2d_array(8, 8);
    game->map = get_map(argc, argv);
    game->enemi_play = malloc(sizeof(char) * 3);
    game->my_play = malloc(sizeof(char) * 3);
    if (game->map == NULL || game->map_enemi == NULL ||
        game->enemi_play == NULL || game->my_play == NULL) {
        destroy_game(game);
        return NULL;
    }
    game->my_play[0] = '\0';
    game->enemi_play[0] = '\0';
    game->my_play[1] = '\0';
    game->enemi_play[1] = '\0';
    game->my_play[2] = '\0';
    game->enemi_play[2] = '\0';
    return game;
}

int parsing(char *buff, char **map)
{
    if (buff[2] == buff[5] && absolute(buff[3] -
        buff[6]) + 1 == buff[0] - '0') {
        for (int i = my_min(buff[3], buff[6]) - '0';
            i <= my_max(buff[3], buff[6]) - '0'; i++) {
            map[buff[2] - 'A'][i] = buff[0];
        }
        return 0;
    }
    if (buff[3] == buff[6] && absolute(buff[2]
        - buff[5]) + 1 == buff[0] - '0') {
        for (int i = my_min(buff[2], buff[5]) - 'A';
            i <= my_max(buff[2], buff[5]) - 'A'; i++) {
            map[i][buff[3] - '0'] = buff[0];
        }
        return 0;
    }
    return 84;
}

int get_infos(FILE *fd, char **map, int i)
{
    size_t size = 0;
    char *buff = NULL;

    size = getline(&buff, &size, fd);
    if (size != 8 || buff[2] < 'A' || buff[2] > 'H'
        || buff[5] < 'A' || buff[5] > 'H' ||
        buff[0] != i + '2' ||
        buff[3] < '1' || buff[3] > '8' ||
        buff[6] < '1' || buff[6] > '8' ||
        buff[1] != ':' || buff[4] != ':' ||
        buff[7] != '\n')
        return 84;
    if (parsing(buff, map) == 84)
        return 84;
    return 0;
}

char **get_map(int argc, char **argv)
{
    FILE *fd;
    char **map;

    if (argc != 2 && argc != 3)
        return NULL;
    if (argc == 2)
        fd = fopen(argv[1], "r");
    if (argc == 3)
        fd = fopen(argv[2], "r");
    if (fd == NULL)
        return NULL;
    map = mem_alloc_2d_array(8, 8);
    for (int i = 0; i < 4; i++) {
        if (get_infos(fd, map, i))
            return NULL;
    }
    fclose(fd);
    return map;
}

void destroy_game(game_info_t *game)
{
    if (game->enemi_play != NULL)
        free(game->enemi_play);
    if (game->map != NULL)
        rm_map(game->map);
    if (game->map_enemi != NULL)
        rm_map(game->map_enemi);
    if (game->my_play != NULL)
        free(game->my_play);
    free(game);
}
