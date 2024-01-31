/*
** EPITECH PROJECT, 2022
** strstr.c
** File description:
** search for string in string
*/

#include <stddef.h>

int my_strlen(char const *str);
int my_strncmp(char const *s1, char const *s2, int n);

char *my_strstr(char *str, char const *to_find)
{
    int lenstr = my_strlen(str);
    int len = my_strlen(to_find);
    int i = 0;
    int test = 1;

    if (len == 0)
        return str;
    while (test != 0) {
        if (str[i] == to_find[0]) {
            test = my_strncmp(&str[i], to_find, len);
        };
        if ((len + i) > lenstr)
            return NULL;
        i++;
    }
    return &str[i - 1];
}
