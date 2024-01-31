/*
** EPITECH PROJECT, 2022
** Bootstrap BSQ
** File description:
** print first line of file
*/

#include <unistd.h>
#include <stdlib.h>
#include "map.h"

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **res = malloc(sizeof(char *) * (nb_rows + 1));
    int i = 0;

    while (i < nb_rows) {
        res[i] = malloc(sizeof(char) * (nb_cols + 1));
        i++;
    }
    setup_buf(res, nb_rows, nb_cols);
    return res;
}

void setup_buf(char **buf, int nb_rows, int nb_cols)
{
    for (int i = 0; i < nb_rows; i++) {
        for (int j = 0; j < nb_cols; j++)
            buf[i][j] = '0';
        buf[i][nb_cols] = '\0';
    }
    buf[nb_rows] = NULL;
}
