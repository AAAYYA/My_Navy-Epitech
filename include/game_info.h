/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-guillaume.deplaine
** File description:
** game_info
*/

#ifndef GAME_INFO_H_
    #define GAME_INFO_H_
    #include "my.h"

struct game_info {
    char **map;
    char **map_enemi;
    char *my_play;
    char *enemi_play;
} typedef game_info_t;

game_info_t *create_game_info(int argc, char **argv);
void destroy_game(game_info_t *game);
void display_turn(game_info_t *game);
int is_attacked(char *buff, game_info_t *game_info);
void register_info(game_info_t *game, bool i);

#endif
