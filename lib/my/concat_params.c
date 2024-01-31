/*
** EPITECH PROJECT, 2022
** concat_params.c
** File description:
** put all args on the same line with \n between them
*/

int my_strlen(char const *str);
char *my_strncpy(char *dest, char const *src, int n);
#include <stdlib.h>

void add_dash_n(int i, int argc, int pointer, char *to_return)
{
    if (i < argc - 1)
        to_return[pointer - 1] = '\n';
}

char *concat_params(int argc, char **argv)
{
    int i = 0;
    char *to_return;
    int size = argc;
    int pointer = 0;

    while (i < argc) {
        size = size + my_strlen(argv[i]);
        i++;
    };
    to_return = malloc(sizeof(char) * size);
    for (i = 0; i < argc; i++) {
        size = 0;
        while (size < my_strlen(argv[i])) {
            to_return[pointer + size] = argv[i][size];
            size++;
        };
        pointer = pointer + my_strlen(argv[i]) + 1;
        add_dash_n(i, argc, pointer, to_return);
    };
    return to_return;
}
