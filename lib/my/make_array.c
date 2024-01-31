/*
** EPITECH PROJECT, 2022
** day 6
** File description:
** make and output value of array
*/

int *array_make(int *arr, int a, int b)
{
    arr[0] = a;
    arr[1] = b;
    return arr;
}

void array_get(int *arr, int *a, int *b)
{
    *a = arr[0];
    *b = arr[1];
}
