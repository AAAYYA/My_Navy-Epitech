/*
** EPITECH PROJECT, 2022
** my_print_comb2.c
** File description:
** same as my_print_comb but with with 2 2 digits numbers.
*/

void my_putchar(char c);

void print_nb(int i)
{
    my_putchar(48 + i);
}

void if_print(int i, int j, int k, int l)
{
    int test;

    test = 0;
    if (i < k) {
        test = 1;
    };
    if ((j < l) && (i == k)) {
        test = 1;
    };
    if (test) {
        print_nb(i);
        print_nb(j);
        my_putchar(' ');
        print_nb(k);
        print_nb(l);
        if ((i != 9) || (j != 8) || (k != 9) || (l != 9)) {
            my_putchar(',');
            my_putchar(' ');
        };
    };
}

void boucle_while_2(int i, int j, int k, int l)
{
    while (k < 10)  {
        while (l < 10) {
            if_print(i, j, k, l);
            l++;
        };
        k++;
        l = 0;
    };
}

void boucle_while_1(int i, int j, int k, int l)
{
    while (i < 10) {
        while (j < 10) {
            boucle_while_2(i, j, k, l);
            j++;
            k = i;
        };
        i++;
        j = 0;
    };
}

int my_print_comb2(void)
{
    int i;
    int j;
    int k;
    int l;

    i = 0;
    j = 0;
    k = 0;
    l = 0;
    boucle_while_1(i, j, k, l);
    my_putchar('\n');
    return (0);
}
