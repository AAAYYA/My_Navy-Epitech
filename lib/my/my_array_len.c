/*
** EPITECH PROJECT, 2022
** array lenth
** File description:
** array length but written wrognly
*/

#include <stddef.h>

int my_array_len(const char **arr)
{
    int i = 0;

    while (arr[i] != NULL) {
        i++;
    };
    return i;
};

int my_int_array_len(const int *arr)
{
    int i = 0;

    while (arr[i] != 0) {
        i++;
    };
    return i;
};
