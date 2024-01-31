/*
** EPITECH PROJECT, 2022
** showstr
** File description:
** print str with non printable as \hexa
*/

int my_strlen(char const *str);
void my_putchar(char c);
int my_putnbr_base_no_end(int nbr, char const *base);
int my_str_isprintable(char *str);

void my_print_non_printable_char(char c)
{
    my_putchar(92);
    my_putnbr_base_no_end(c, "0123456789abcdef");
}

int my_showstr(char const *str)
{
    int len = my_strlen(str);
    int i = 0;
    char test[] = " ";

    while (i < len) {
        test[0] = str[i];
        if (my_str_isprintable(test))
            my_putchar(str[i]);
        else
            my_print_non_printable_char(str[i]);
        i++;
    };
    my_putchar('\n');
    return 0;
}
