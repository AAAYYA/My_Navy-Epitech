/*
** EPITECH PROJECT, 2022
** my_str_to_word_array.c
** File description:
** split str in array of word
*/

#include <stdlib.h>
int my_strlen(char const *str);
int my_array_len(char const **str);
int my_str_isnum(char const *str);
int my_str_isalpha(char const *str);
char *my_strdup(char const *str);

int my_count_char(char const *str, char d)
{
    int b = 0;

    for (int a = 0; str[a] < my_strlen(str); a++)
        if (str[a] == d)
            b++;
    return b;
}

int malloc_that(char *str, char delimiteur, int send_it)
{
    int i = send_it;
    while (str[i] != delimiteur && str[i] != '\0') {
        i++;
    }
    return i;
}

int fetch_delim(char const *str, char delimiteur)
{
    int i = 1;
    for (int n = 0; n < my_strlen(str); n++)
        if (str[n] == delimiteur)
            i++;
    return i;
}

int my_wordlen(char *str, int a, char d)
{
    int b = 0;
    while (str[a - 1] != d) {
        a++;
        b++;
    }
    return b;
}

char **my_str_to_word_array(char *str, char delimiteur)
{
    char **word = malloc(sizeof(char *) * (fetch_delim(str, delimiteur) + 1));
    int count = 0, y = 0, send_it = 0, tmp = 0, n = 0, i = 0;
    for (i = 0; i < fetch_delim(str, delimiteur); i++) {
        tmp = malloc_that(str, delimiteur, send_it);
        word[i] = malloc(sizeof(char) * (tmp + 2 + 1));
        send_it += tmp;
    }
    for (n = 0; str[n] != '\0'; n++) {
        if (str[n] == delimiteur) {
            word[count][y] = '\0';
            count++;
            y = 0;
        } else {
            word[count][y] = str[n];
            y += 1;
        }
    }
    word[count + 1] = NULL;
    for (int i = 0; word[i]; i++)
    return word;
}
