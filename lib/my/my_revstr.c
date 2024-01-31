/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** copy of my_evil_str, an evil function that's called rev
*/

int my_strlen(char *str);
char *my_strcpy(char *dest, char *src);

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    int i = len;
    char result[len + 1];
    int j = 0;

    result[len] = '\0';
    while (i > 0) {
        i = i - 1;
        result[j] = str[i];
        j++;
    };
    my_strcpy(str, result);
    return str;
}
