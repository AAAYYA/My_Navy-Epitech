/*
** EPITECH PROJECT, 2022
** my_putnbr_base
** File description:
** my putnbr with translation before
*/

void my_putchar(char c);
int my_strlen(char const *str);
void print_number_x_in_string(int x, char const *string);
void my_putnbr_base_part2(int nbr, char const *base);
int my_power(int nb, int p);

long int my_long_power(int nb, int p)
{
    long int result = 1;

    while (p > 0) {
        if ((result * nb) > 9223372036854775807)
            return 0;
        if ((result * nb) < -9223372036854775807)
            return 0;
        result = result * nb;
        p = p - 1;
    };
    return result;
}

void my_putnbr_base_no_neg_part2(unsigned int nbr, char const *base)
{
    unsigned int len = my_strlen(base);
    char nb;

    if (nbr >= len) {
        nb = nbr % len;
        my_putnbr_base_no_neg_part2((nbr - nb) / len, base);
    } else {
        nb = nbr;
    };
    print_number_x_in_string(nb, base);
}

int my_putnbr_base_16_char(unsigned int *ad, char const *base)
{
    int i = 7;
    unsigned int nbr = *ad;

    if (nbr == 0) {
        while (i > 0) {
            my_putchar('0');
            i = i - 1;
        };
        return 0;
    };
    while (nbr < my_long_power(16, i)) {
        my_putchar('0');
        i = i - 1;
    };
    my_putnbr_base_no_neg_part2(nbr, base);
    *ad = *ad + 16;
    return 0;
}
