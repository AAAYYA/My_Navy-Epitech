/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** Header for map
*/

#ifndef MAP_H
    #define MAP_H

char **load_2d_arr_from_file(int fd, int nb_rows, int nb_cols);
void setup_buf(char **buf, int nb_rows, int nb_cols);
char *mem_alloc(const char *a, const char *b);
char **mem_dup_2d_array(char **arr, int nb_rows, int nb_cols);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
void display_map(char **map);
void rm_map(char **map);
char **get_map(int argc, char **argv);
void write_map_line(char *line);

#endif
