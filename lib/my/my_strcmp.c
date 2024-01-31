/*
** EPITECH PROJECT, 2022
** strstr.c
** File description:
** search for string in string
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int len = my_strlen(s2);
    int len2 = my_strlen(s1);
    int j = 0;
    int i = 0;

    while (1) {
        if (s1[i] < s2[j])
            return -1;
        if (s1[i] > s2[j])
            return 1;
        i++;
        j++;
        if ((len == j) && (len2 == i))
            return 0;
    };
}
