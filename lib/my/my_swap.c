/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** swap int content of adresses a and b
*/

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}
