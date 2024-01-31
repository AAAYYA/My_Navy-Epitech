/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** return number found in string
*/

#include <stddef.h>

char *my_strcpy(char *dest, char const *src);
void array_get(int *arr, int *a, int *b);
int my_strlen(char const *str);
char *my_strstr(char const *str, char const *to_find);
int *array_make(int *arr, int a, int b);
void my_putchar(char c);

int coding_style_is_shit_base(int *test, long int *nb)
{
    if (*test == 6) {
        *test = 0;
        if (*nb == 0)
            return 42;
    };
    return 0;
}

int return_nb_base(long int nb, int const *neg)
{
    int i = -2147483648;
    int j = 2147483647;

    if ((*neg < 0) || (nb < i) || (nb > j))
        return 0;
    if (*neg == 0)
        return nb;
    if (*neg == 1)
        return (0 - nb);
    return nb;
}

int *inside_add_nb_base(long *nb, char const *str, int *arr, char const *base)
{
    int gre = 0;
    int len = my_strlen(base);
    int i = 0;

    if (*nb != 0) {
        while (arr[1] > 1) {
            arr[1] = arr[1] - 2;
        };
    };
    while (str[arr[0]] != base[i])
        i++;
    *nb = return_nb_base(((*nb * len) + i), &gre);
    return arr;
}

int *add_nb_base(long int *nb, char const *str, int *arr, char const *base)
{
    char strofone[2];

    strofone[0] = str[arr[0]];
    strofone[1] = '\0';
    if (my_strstr(base, strofone) != NULL) {
        arr = inside_add_nb_base(nb, str, arr, base);
    } else if (str[arr[0]] == '-') {
        arr[1] = arr[1] + 1;
        arr[3] = 4;
        return arr;
    } else {
        arr[3] = 4;
        arr[1] = 0;
        return arr;
    };
    arr[3] = 6;
    return arr;
}

int my_getnbr_base(char const *str, char const *base)
{
    int len = my_strlen(str);
    int i = 0;
    long int nb = 0;
    int neg = 0;
    int test = -2;
    int arr[3];
    int *ret;

    while (i < len) {
        array_make(arr, i, neg);
        ret = add_nb_base(&nb, str, arr, base);
        test = ret[3] + (test * 3);
        array_get(ret, &i, &neg);
        if (coding_style_is_shit_base(&test, &nb) == 42)
            return 0;
        i++;
        if ((test == 4) && (nb != 0))
            return return_nb_base(nb, &neg);
    };
    return return_nb_base(nb, &neg);
}
