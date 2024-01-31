/*
** EPITECH PROJECT, 2022
** my_str_isalpha
** File description:
** return 0 is any non alphabetical caracter is found
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (!(str[i] < 91 && str[i] > 64))
            return 0;
        i++;
    };
    return 1;
}
