/*
** EPITECH PROJECT, 2022
** my_strupcase.c
** File description:
** UpCase every thing ...
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] < 91) && (str[i] > 65))
            str[i] = str[i] + 32;
        i++;
    };
    return str;
}
