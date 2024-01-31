/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** copies n caracters from somewhere to another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n) {
        if (src[i] != '\0')
            dest[i] = src[i];
        else
            dest[i] = '\0';
        i++;
    };
    return dest;
}
