/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** dest + src (copy from strncat from man strcat)
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, const char *src)
{
    int dest_len = my_strlen(dest);
    int i;

    for (i = 0 ; src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';

    return dest;
}
