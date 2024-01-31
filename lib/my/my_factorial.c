/*
** EPITECH PROJECT, 2022
** my_compute_factorial_rec.c
** File description:
** compute factorial recursivly (better than it)
*/

int my_factorial(int nb)
{
    if (nb == 0)
        return 1;
    if (nb < 0)
        return 0;
    return (my_factorial(nb - 1) * nb);
}
