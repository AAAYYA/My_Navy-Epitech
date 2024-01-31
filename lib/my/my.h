/*
** EPITECH PROJECT, 2022
** Lib my
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H
    #ifndef true
        #define true (1)
    #endif
    #ifndef false
        #define false (0)
    #endif

    int my_max(int a, int b);
    int my_min(int a, int b);
    unsigned long long absolute(long long const nb);
    void my_putnbr_base_no_neg_part2(unsigned int nbr, char const *base);
    long int my_long_power(int nb, int p);
    int *array_make(int *, int, int);
    void array_get(int *, int *, int *);
    int my_int_array_len(int *);
    int my_array_len(char **);
    int my_factorial(int);
    int my_find_prime_sup(int);
    int coding_stryle_is_shit_base(int *, long int *);
    int return_nb_base(long int, int const*);
    int *inside_add_nb_base(long *, char const *, int *, char const *);
    int *add_nb_base(long int *, char const *, int *, char const *);
    int my_getnbr_base(char const *, char const *);
    int coding_style_is_shit(int *, long int *);
    void inside_add_nb(long int *, char const *, int const, int *);
    int add_nb(long int *, char const *, int const, int *);
    int return_nb(long int, int const*);
    int my_getnbr(char const *);
    int my_isneg(int);
    int my_is_prime(int);
    int my_compute_power_rec(int, int);
    void print_nb(int);
    void if_print(int, int, int, int);
    void boucle_while_2(int, int, int, int);
    void boucle_while_1(int, int, int, int);
    int my_print_comb2(void);
    int style_pass_through_if(int, int, int);
    int print_nb_ijk(int, int, int);
    int style_pass_through_while(int, int, int);
    int my_print_comb(void);
    void putnb(int, int);
    int test_between(int,int);
    int rec_function(int, int, int, int);
    int my_print_combn(int);
    int my_print_digits(void);
    void my_putchar(char);
    void print_number_x_in_string(int, char const *);
    void my_putnbr_base_part2(int, char const *);
    int my_putnbr_base(int, char const *);
    int my_putnbr_base_no_end(int, char const *);
    void print_nb2(int);
    int my_put_nbr_part2(int);
    int my_put_nbr(int);
    int my_putstr(char const *);
    char *my_revstr(char*);
    void my_print_char(char, int);
    void test1(int *, int, int, char const *);
    void test2(int *, int, int, char const *);
    void print_mem(unsigned int *);
    int my_showmem(char const *, int);
    void my_print_non_printable_char(char);
    int my_showstr(char const *);
    void my_sort_int_array(int *, int);
    void test_sort_str_rev(int, int, char**, int*);
    void my_sort_str_rev_array(char**, int);
    int my_compute_square_root(int);
    void strcapitalize_effect(char *, int *, int);
    void strcapitalize_effect_not(char *, int *, int);
    char *my_strcapitalize(char*);
    char *my_strcat(char *, const char*);
    int my_strcmp(char const *, char const *);
    char *my_strcpy(char *, char const *);
    int my_str_isalpha(char const *);
    int my_str_islower(char const *);
    int my_str_isnum(char const *);
    int my_str_isprintable(char const *);
    int my_str_isupper(char const *);
    int my_strlen(char const *);
    int my_strlen_until(char const *, char);
    int my_nbline(char const *);
    int my_nbline_col(char const *, int);
    char *my_strlowcase(char*);
    char *my_strncat(char *, const char *, int);
    int my_strncmp(char const *, char const *, int);
    char *my_strncpy(char *, char const *, int);
    char *my_strstr(char *, char const*);
    char *my_strupcase(char *);
    void my_swap(int *, int *);
    void my_swap_str(char**, char**);
    void add_dash_n(int, int, int, char*);
    char *concat_params(int, char**);
    char *convert_base(char const *, char const *, char const *);
    int my_show_word_array(char* const *);
    char *my_strdup(char const *);
    char *add(char *, char);
    char *print_number_x_into_string(char *, int, char const *);
    char *my_strnbr_base_part2_into_string(char *, int, char const *);
    char *my_strnbr_base(int, char const *);
    char **loop_str_to_word(int, char**, char const *);
    char **my_str_to_word_array(char const *, char const delim);
    int my_put_nbr_no_end(int);

    #ifndef bool
        typedef unsigned char bool;
    #endif

#endif
