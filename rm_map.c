/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** Main file
*/

#include <unistd.h>
#include "map.h"
#include "my.h"
#include <stdlib.h>

void rm_map(char **map)
{
    for (int i = 0; i < my_array_len(map); i++) {
        if (map[i] != NULL)
            free(map[i]);
    }
    free(map);
}
