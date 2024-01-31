/*
** EPITECH PROJECT, 2022
** my_find_prime_sup.c
** File description:
** return smallest prime after nb
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (nb <= 2)
        return 2;
    while (nb < 2147483642) {
        if (my_is_prime(nb))
            return nb;
        nb++;
    };
    return 2147483647;
}
