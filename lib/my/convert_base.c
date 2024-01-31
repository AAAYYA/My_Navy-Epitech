/*
** EPITECH PROJECT, 2022
** convert_base.c
** File description:
** convert an int from a base to another
*/

int my_getnbr_base(char const *nbr, char const *base);
char *my_strnbr_base(int nbr, char const *base);

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    int nb;

    nb = my_getnbr_base(nbr, base_from);
    return my_strnbr_base(nb, base_to);
}
