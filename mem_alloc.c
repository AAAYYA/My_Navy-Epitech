/*
** EPITECH PROJECT, 2022
** Bootstrap BSQ
** File description:
** print first line of file
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char *mem_alloc(const char *a, const char *b)
{
    char *res = malloc(sizeof(a) + sizeof(b));
    int i = 0;
    int len_a = my_strlen(a);
    int len_b = my_strlen(b);

    while (i < len_a) {
        res[i] = a[i];
        i++;
    }
    while (i < len_a + len_b) {
        res[i] = b[i - len_a];
        i++;
    }
    res[i] = '\0';
    return res;
}
