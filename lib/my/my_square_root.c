/*
** EPITECH PROJECT, 2022
** my_compute_square_root.c
** File description:
** compute square root AND I CAN CHOOSE BETWEEN IT AND REC !!! YAY !!!
*/

int my_compute_square_root(int nb)
{
    int i = 0;
    int test = nb / 2;

    if (nb == 1)
        return 1;
    while (i <= test) {
        if ((i * i) == nb)
            return i;
        i++;
    };
    return 0;
}
