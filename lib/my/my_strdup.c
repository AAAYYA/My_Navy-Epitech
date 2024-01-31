/*
** EPITECH PROJECT, 2022
** my_strdup
** File description:
** strdup copy
*/

#include <stdlib.h>
int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    int i;
    char *to_return;

    if (my_strlen(src) < 1) {
        to_return = malloc(sizeof(char));
        to_return[0] = '\0';
        return to_return;
    };
    to_return = malloc(sizeof(char) * (my_strlen(src) + 1));
    for (i = 0; i <= my_strlen(src); i++)
        to_return[i] = src[i];
    to_return[my_strlen(src)] = '\0';
    return to_return;
}
