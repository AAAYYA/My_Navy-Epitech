/*
** EPITECH PROJECT, 2022
** my_putnbr_base
** File description:
** my putnbr with translation before
*/

#include <stdlib.h>
int my_strlen(char const *str);

char *add(char *first, char c)
{
    first[my_strlen(first)] = c;
    first[my_strlen(first)] = '\0';
    return first;
}

char *print_number_x_into_string(char *ret, int x, char const *string)
{
    ret = add(ret, string[x]);
    return ret;
}

char *my_strnbr_base_part2_into_string(char *ret, int nbr, char const *base)
{
    int len = my_strlen(base);
    char nb;

    if (nbr >= len) {
        nb = nbr % len;
        ret = my_strnbr_base_part2_into_string(ret, (nbr - nb) / len, base);
    } else {
        nb = nbr;
    };
    print_number_x_into_string(ret, nb, base);
    return ret;
}

char *my_strnbr_base(int nbr, char const *base)
{
    char *ret = malloc((sizeof(char) * nbr) / my_strlen(base));
    int i;

    if (nbr < 0) {
        ret = add(ret, '-');
        nbr = 0 - nbr;
    };
    if (nbr == 0) {
        ret = add(ret, base[0]);
        ret = add(ret, '\0');
        return "0";
    };
    for (i = 0; i < (nbr / my_strlen(base)); i++)
    ret[i] = '\0';
    ret = my_strnbr_base_part2_into_string(ret, nbr, base);
    return ret;
}
