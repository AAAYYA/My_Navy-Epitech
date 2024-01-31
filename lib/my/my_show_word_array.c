/*
** EPITECH PROJECT, 2022
** my_show_word_array.c
** File description:
** show an array of words on different lines
*/

int my_array_len(char * const *arr);
int my_putstr(char const *str);

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (i < my_array_len(tab)) {
        my_putstr(tab[i]);
        i++;
    };
    return 0;
}
