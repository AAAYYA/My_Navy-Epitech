/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-guillaume.deplaine
** File description:
** unit tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/game_info.h"
#include "../include/connect.h"
#include "../include/navy.h"
#include "../include/map.h"
#include "../include/my.h"
#include "../include/var.h"
#include "../include/win_loose.h"

void redirect_all_std(void) {
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(game, invalid_input, .init = redirect_all_std) {
    char **argv = mem_alloc_2d_array(1, 9);
    my_strcpy(argv[0], "/root");
    game_info_t *game = create_game_info(2, argv);
    cr_assert(NULL == game);
}
