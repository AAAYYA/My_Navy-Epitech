/*
** EPITECH PROJECT, 2022
** my_print_digits.c
** File description:
** display 0123456789 on one line
*/

void my_putchar(char c);

int my_print_digits(void)
{
    int i;

    i = 48;
    while (i < 58) {
        my_putchar(i);
        i++;
    }
    my_putchar('\n');
    return (0);
}
