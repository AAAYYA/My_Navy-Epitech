/*
** EPITECH PROJECT, 2022
** my_print_combn.c
** File description:
** print all n digits combination
*/

void my_putchar(char c);

void putnb(int nb, int n)
{
    int a_print;

    a_print = nb / 10;
    if (n != 0) {
        putnb(a_print, n - 1);
    };
    a_print = nb - (a_print * 10);
    my_putchar(48 + a_print);
}

int test_between(int get,int nb)
{
    int units;
    int totest = 9;
    int test = nb;

    while (nb > 0) {
        units = (get - ((get / 10) * 10));
        get = get / 10;
        nb = nb - 1;
        if (totest == units)
            test = test - 1;
        totest = totest - 1;
    };
    if (!test)
        my_putchar('\n');
    else {
        my_putchar(',');
        my_putchar(' ');
    }
    return 0;
}

int rec_function(int st, int get, int n, int nb)
{
    int i = st;

    if (n == 0) {
        putnb(get, nb - 1);
        test_between(get, nb);
        return (0);
    };
    if (st > 9)
        return (0);
    while (i < 10) {
        rec_function(i + 1, (get * 10) + i, n - 1, nb);
        i++;
    };
    return (0);
}

int my_print_combn(int n)
{
    if ((n < 11) && (n > 0))
        rec_function(0, 0, n, n);
    return (0);
}
