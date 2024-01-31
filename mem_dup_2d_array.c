/*
** EPITECH PROJECT, 2022
** Bootstrap BSQ
** File description:
** print first line of file
*/

#include <unistd.h>
#include "map.h"
#include <stdlib.h>

char **mem_dup_2d_array(char **arr, int nb_rows, int nb_cols)
{
    char **res = mem_alloc_2d_array(nb_rows, nb_cols);
    int i = 0;
    int j;

    while (i < nb_rows) {
        j = 0;
        while (j < nb_cols) {
            res[i][j] = arr[i][j];
            j++;
        }
        i++;
    }
    return res;
}
