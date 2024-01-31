/*
** EPITECH PROJECT, 2022
** strstr.c
** File description:
** search for string in string
*/

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int j = 0;
    int i = 0;

    while (1) {
        if (s1[i] < s2[j])
            return -1;
        if (s1[i] > s2[j])
            return 1;
        i++;
        j++;
        if (n == j)
            return 0;
    };
}
