/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-guillaume.deplaine
** File description:
** navy
*/

#ifndef NAVY_H_
    #define NAVY_H_
    #include <signal.h>
    #include "game_info.h"
    #include "my.h"

int navy(int argc, char **argv, struct sigaction *sa, game_info_t *game);
int player_1(struct sigaction *sa, game_info_t *game);
int turn_2nd_player(struct sigaction *sa, game_info_t *game, bool i);
int print_ennemy_attack(game_info_t *game, struct sigaction *sa);
int print_my_attack(game_info_t *game, struct sigaction *sa);

#endif
