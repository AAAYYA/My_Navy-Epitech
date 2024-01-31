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
int my_putstr(char const *str);
int my_putnbr_base_16_char(unsigned int *ad, char const *base);

void my_print_char(char c, int type)
{
    if (type == 16)
        my_putnbr_base_no_end(c, "0123456789abcdef");
    if (type == 10)
        my_putchar(c);
}

void test1(int *stop, int i, int j, char const *str)
{
    if ((j % 2) == 0)
        my_putchar(' ');
    if ((stop[0]) || (i + j > stop[2])) {
        stop[0] = 1;
        my_putchar(' ');
        my_putchar(' ');
        return;
    } else {
        my_print_char(str[i + j], 16);
    };
}

void test2(int *stop, int i, int j, char const *str)
{
    char test[] = " ";

    if ((stop[1]) || (i + j > stop[2])) {
        stop[1] = 1;
        return;
    };
    test[0] = str[i + j];
    if (!my_str_isprintable(test))
        my_putchar('.');
    else
        my_print_char(str[i + j], 10);
    i++;
};

void print_mem(unsigned int *address)
{
    my_putnbr_base_16_char(address, "0123456789abcdef");
    my_putchar(':');
}

int my_showmem(char const *str, int size)
{
    int i[] = {0, 0};
    int stop[] = {0, 0, size};
    unsigned int add = &str[i[0]];

    while (i[0] < size) {
        print_mem(&add);
        while (i[1] < 16){
            test1(stop, i[0], i[1], str);
            i[1]++;
        };
        i[1] = 0;
        my_putchar(' ');
        while (i[1] < 16){
            test2(stop, i[0], i[1], str);
            i[1]++;
        };
        i[0] = i[0] + 16;
        i[1] = 0;
        my_putchar('\n');
    };
}
