/*
** EPITECH PROJECT, 2022
** my_sort_int_array.c
** File description:
** sorts an array of strings
*/

void my_swap_str(char **a, char **b);
int my_strcmp(char *s1, char *s2);

void test_sort_str_rev(int i, int j, char **array, int *min)
{
    if (my_strcmp(array[i], array[j]) < 0) {
        if (my_strcmp(array[j], array[*min]) > 0) {
            *min = j;
        };
    };
}

void my_sort_str_rev_array(char **array, int size)
{
    int i = 0;
    int min = 0;
    int j;

    while (i < (size - 1)) {
        j = i + 1;
        while (j < size) {
            test_sort_str_rev(i, j, array, &min);
            j++;
        };
        my_swap_str(&array[i], &array[min]);
        i++;
        min = i;
    };
}
