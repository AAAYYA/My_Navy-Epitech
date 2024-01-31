/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** return lenth of string
*/

int my_strlen_until(char const *str, char c)
{
    int i = 0;

    while (str[i] != '\0' && str[i] != 'c') {
        i++;
    };
    return i;
}
