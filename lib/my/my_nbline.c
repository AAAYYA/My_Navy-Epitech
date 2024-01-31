/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** return lenth of string
*/

int my_nbline(char const *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            count++;
        i++;
    };
    return count + 1;
}

int my_nbline_col(char const *str, int nb_cols)
{
    int i = 0;
    int j = 0;
    int count = 0;

    while (str[i] != '\0') {
        j++;
        if (str[i] == '\n' || j == nb_cols) {
            count++;
            j = 0;
        };
        i++;
    };
    return count + 1;
}
