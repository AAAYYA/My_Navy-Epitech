/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** display number given as parameter
*/

void my_putchar(char c);

void print_nb2(int nb)
{
    int a_print;

    a_print = nb / 10;
    if (a_print != 0) {
        print_nb2(a_print);
    };
    a_print = nb - (a_print * 10);
    my_putchar(48 + a_print);
}

int my_put_nbr_part2(int nb)
{
    if (nb == -2147483648) {
        my_putchar('2');
        my_putchar('1');
        my_putchar('4');
        my_putchar('7');
        my_putchar('4');
        my_putchar('8');
        my_putchar('3');
        my_putchar('6');
        my_putchar('4');
        my_putchar('8');
    } else if (nb == 0) {
        my_putchar('0');
    } else {
        print_nb2(nb);
    };
    return (0);
}

int my_put_nbr(int nb)
{
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = 0 - nb;
    };
    i = my_put_nbr_part2(nb);
    my_putchar('\n');
    return i;
}

int my_put_nbr_no_end(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = 0 - nb;
    };
    return my_put_nbr_part2(nb);
}
