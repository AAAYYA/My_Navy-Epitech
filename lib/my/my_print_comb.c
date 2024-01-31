/*
** EPITECH PROJECT, 2022
** my_print_comb.c
** File description:
** display all 3 differents digits combination
** showing only the smallest of the 6 combinations for these digits
*/

void my_putchar(char c);

int style_pass_through_if(int i, int j, int k)
{
    if (i != k) {
        my_putchar(i);
        my_putchar(j);
        my_putchar(k);
        if ((i != 55) || (j != 56) || (k != 57)) {
            my_putchar(',');
            my_putchar(' ');
        };
    };
    return (0);
}

int print_nb_ijk(int i, int j, int k)
{
    if (i != j) {
        if (j != k) {
            style_pass_through_if(i, j, k);
        };
    };
    return (0);
}

int style_pass_through_while(int i, int j, int k)
{
    while (k < 58) {
        print_nb_ijk(i, j, k);
        k++;
    };
    return (0);
}

int my_print_comb(void)
{
    int i;
    int j;
    int k;

    i = 48;
    j = 49;
    k = 50;
    while (i < 58) {
        while (j < 58) {
            style_pass_through_while(i, j, k);
            j++;
            k = j;
        };
        i++;
        j = i;
    };
    my_putchar('\n');
    return (0);
}
