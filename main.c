/*
** EPITECH PROJECT, 2022
** ff
** File description:
** ff
*/

#include "connect.h"
#include <signal.h>
#include <stddef.h>
#include <unistd.h>
#include "navy.h"
#include "var.h"
#include <stdio.h>
#include <stdlib.h>
#include "game_info.h"
#include "win_loose.h"

int helper(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./navy [first_player_pid] navy_positions\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tfirst_player_pid: only for ");
    my_putstr("the 2nd player. pid of the first player.\n");
    my_putstr("navy_positions: file representing ");
    my_putstr("the positions of the ships.\n");
    return 0;
}

int main(int argc, char **argv)
{
    struct sigaction sa;
    game_info_t *game = create_game_info(argc, argv);

    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h')
        return helper();
    if (game == NULL)
        return 84;
    process_info();
    sa.sa_flags = SA_SIGINFO;
    if (argc == 2)
        sa.sa_sigaction = &get_pid_sig;
    if (argc == 3)
        sa.sa_sigaction = &get_count;
    sigaction(SIGUSR2, &sa, NULL);
    sigaction(SIGUSR1, &sa, NULL);
    if (put_default(argc, argv))
        return 84;
    sa.sa_sigaction = &get_count;
    return navy(argc, argv, &sa, game);
}

int navy(int argc, char **argv, struct sigaction *sa, game_info_t *game)
{
    int nb;
    char buff[] = "\0\0\0\0\0";
    bool i = 1;

    display_turn(game);
    while (sig_counter.test) {
        if (argc == 2)
            player_1(sa, game);
        if (argc == 3)
            turn_2nd_player(sa, game, i);
        if (win(game->map_enemi) || loose(game->map))
            sig_counter.test = false;
        i = 0;
    }
    display_turn(game);
    if (win(game->map_enemi))
        write(1, "I won\n\n", 8);
    else
        write(1, "Enemy won\n\n", 12);
    destroy_game(game);
}

void register_info(game_info_t *game, bool i)
{
    int tmp = get_info(1) - i;
    int tmp_div = tmp / 10;

    if (game->enemi_play[0] == '\0')
        game->enemi_play[0] = tmp_div + 'A' - 1;
    if (game->enemi_play[1] == '\0')
        game->enemi_play[1] = tmp - (tmp_div * 10) + '0';
}
