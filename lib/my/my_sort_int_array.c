/*
** EPITECH PROJECT, 2022
** my_sort_int_array.c
** File description:
** sorts an array of integer
*/

void my_swap(int *a, int *b);

void test(int i, int j, int *array, int *min)
{
    if (array[i] > array[j]) {
        if (array[j] < array[*min]) {
            *min = j;
        };
    };
}

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int min = 0;
    int j;

    while (i < (size - 1)) {
        j = i + 1;
        while (j < size) {
            test(i, j, array, &min);
            j++;
        };
        my_swap(&array[i], &array[min]);
        i++;
        min = i;
    };
}
