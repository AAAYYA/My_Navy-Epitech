/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-guillaume.deplaine
** File description:
** player_1
*/

#include "game_info.h"
#include <signal.h>
#include "connect.h"
#include <unistd.h>
#include <stddef.h>
#include <time.h>
#include "win_loose.h"

int print_my_attack(game_info_t *game, struct sigaction *sa)
{
    kill_usr_count((game->my_play[0] - 'A' + 1) * 10
        + game->my_play[1] - '0', 1, sa);
    write(1, game->my_play, 2);
    sigaction(SIGUSR1, sa, NULL);
    sigaction(SIGUSR2, sa, NULL);
    pause();
    if (sig_counter.sig1) {
        game->map_enemi[game->my_play[1] - '1'][game->my_play[0] - 'A'] = '9';
        write(1, ": hit\n\n", 8);
    } else {
        game->map_enemi[game->my_play[1] - '1'][game->my_play[0] - 'A'] = '1';
        write(1, ": missed\n\n", 11);
    }
    sig_counter.sig2 = 0;
    sig_counter.sig1 = 0;
    return (win(game->map_enemi) || loose(game->map));
}

int print_ennemy_attack(game_info_t *game, struct sigaction *sa)
{
    sig_counter.sender = true;
    usleep(5000);
    write(1, game->enemi_play, 2);
    if (game->map[game->enemi_play[1] - '1']
        [game->enemi_play[0] - 'A'] == '0') {
        kill(sig_counter.pid, SIGUSR2);
        game->map[game->enemi_play[1] - '1'][game->enemi_play[0] - 'A'] = '1';
        pause();
        write(1, ": missed\n\n", 11);
    } else {
        kill(sig_counter.pid, SIGUSR1);
        game->map[game->enemi_play[1] - '1'][game->enemi_play[0] - 'A'] = '9';
        pause();
        write(1, ": hit\n\n", 8);
    }
    usleep(5000);
    sig_counter.sender = false;
    game->enemi_play[0] = '\0';
    game->enemi_play[1] = '\0';
    return (win(game->map_enemi) || loose(game->map));
}

int player_1(struct sigaction *sa, game_info_t *game)
{
    char buff[8];

    while (is_attacked(buff, game) == 84)
        write(1, "wrong position\n", 16);
    if (print_my_attack(game, sa))
        return 0;
    write(1, "waiting for enemy's attack...\n", 31);
    while (game->enemi_play[1] == '\0') {
        sigaction(SIGUSR1, sa, NULL);
        sigaction(SIGUSR2, sa, NULL);
        if (sig_counter.sig2 != 0)
            register_info(game, 0);
    }
    if (print_ennemy_attack(game, sa))
        return 0;
    display_turn(game);
    return 0;
}
