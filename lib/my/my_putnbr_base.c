/*
** EPITECH PROJECT, 2022
** my_putnbr_base
** File description:
** my putnbr with translation before
*/

void my_putchar(char c);
int my_strlen(char const *str);

void print_number_x_in_string(int x, char const *string)
{
    my_putchar(string[x]);
}

void my_putnbr_base_part2(int nbr, char const *base)
{
    int len = my_strlen(base);
    char nb;

    if (nbr >= len) {
        nb = nbr % len;
        my_putnbr_base_part2((nbr - nb) / len, base);
    } else {
        nb = nbr;
    };
    print_number_x_in_string(nb, base);
}

int my_putnbr_base(int nbr, char const *base)
{
    if (nbr < 0) {
        my_putchar('-');
        nbr = 0 - nbr;
    };
    if (nbr == 0) {
        my_putchar(base[0]);
        my_putchar('\n');
        return 0;
    };
    my_putnbr_base_part2(nbr, base);
    my_putchar('\n');
    return 0;
}

int my_putnbr_base_no_end(int nbr, char const *base)
{
    if (nbr < 0) {
        my_putchar('-');
        nbr = 0 - nbr;
    };
    if (nbr == 0) {
        my_putchar(base[0]);
        my_putchar(base[0]);
        return 0;
    };
    if (nbr < my_strlen(base))
        my_putchar(base[0]);
    my_putnbr_base_part2(nbr, base);
    return 0;
}
