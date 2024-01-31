/*
** EPITECH PROJECT, 2022
** my_is_prime.c
** File description:
** return true or false for prime test
*/

int my_is_prime(int nb)
{
    int i = 2;
    int max = (nb / 2) + 1;

    if (nb < 2)
        return 0;
    while (i < max) {
        if (!(nb % i)) {
            return 0;
        };
        i++;
    };
    return 1;
}
