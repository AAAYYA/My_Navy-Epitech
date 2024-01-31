/*
** EPITECH PROJECT, 2022
** my_strupcase.c
** File description:
** UpCase every thing ...
*/

void strcapitalize_effect(char *str, int *test, int i)
{
    if ((!*test) && (str[i] < 91))
        str[i] = str[i] - 32;
    if ((*test) && (str[i] > 96))
        str[i] = str[i] + 32;
    *test = 0;
}

void strcapitalize_effect_not(char *str, int *test, int i)
{
    if (str[i] < 58 && str[i] > 47)
        *test = 0;
    else
        *test = 1;
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    int test = 1;

    while (str[i] != '\0') {
        if ((str[i] < 91 && str[i] > 64) || (str[i] > 96 && str[i] < 123))
            strcapitalize_effect(str, &test, i);
        else
            strcapitalize_effect_not(str, &test, i);
        i++;
    };
    return str;
}
