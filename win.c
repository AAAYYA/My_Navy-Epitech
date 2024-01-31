/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-guillaume.deplaine
** File description:
** win
*/

#include "my.h"

bool win(char **map)
{
    int compte = 0;
    int i = 0;
    int j = 0;

    while (i < 8) {
        if (map[i][j] == '9')
            compte++;
        j++;
        if (j == 8) {
            j = 0;
            i++;
        }
    }
    return (compte > 13);
}

bool loose(char **map)
{
    int i = 0;
    int j = 0;

    while (i < 8) {
        if (map[i][j] != '9' && map[i][j] != '1' && map[i][j] != '0')
            return false;
        j++;
        if (j == 8) {
            j = 0;
            i++;
        }
    }
    return true;
}
