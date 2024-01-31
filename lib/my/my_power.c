/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** power recursivly
*/

int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    return (my_compute_power_rec(nb, (p - 1)) * nb);
}
