/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** swap str content of adresses a and b
*/

void my_swap_str(char **a, char **b)
{
    char *temp = *a;

    *a = *b;
    *b = temp;
}
