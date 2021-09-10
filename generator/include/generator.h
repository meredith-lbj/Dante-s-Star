/*
** EPITECH PROJECT, 2021
** generator
** File description:
** No file there, just an epitech header example
*/

#ifndef GENERATOR_H_
#define GENERATOR_H_
#include "my.h"
typedef struct cell_s
{
    int pos_x;
    int pos_y;
    struct cell_s *next;
}cell_t;
typedef struct maze_s
{
    char **maze;
    int width;
    int height;
    int rd_nb;
    int count;
}maze_t;
int my_getnbr(char const *str);
int my_str_isnum(char const *str);
cell_t *random_cell(cell_t *cur_cell, maze_t **maze_i);
char **alloc_mem(maze_t *maze_i);
char **create_maze(maze_t *maze_i);
maze_t *complex_maze(cell_t **cur_cell, cell_t **walls,
                     maze_t *maze_i);
int check_move(maze_t *maze_i, int pos_x, int pos_y);
int move_is_valid(cell_t *cur_cell, maze_t **maze_i);
int up_is_valid(cell_t *cur_cell,  maze_t **maze_i,
                int add_way);
int down_is_valid(cell_t *cur_cell,  maze_t **maze_i,
                  int add_way);
int right_is_valid(cell_t *cur_cell,  maze_t **maze_i,
                   int add_way);
int left_is_valid(cell_t *cur_cell,  maze_t **maze_i,
                  int add_way);
int are_walls(cell_t **cur_cell, maze_t *maze_i);
int up_are_walls(cell_t **cur_cell, maze_t *maze_i);
int down_are_walls(cell_t **cur_cell, maze_t *maze_i);
int right_are_walls(cell_t **cur_cell, maze_t *maze_i);
int left_are_walls(cell_t **cur_cell, maze_t *maze_i);
maze_t *move_up(cell_t **cur_cell, cell_t **prev,
                maze_t *maze_i);
maze_t *move_down(cell_t **cur_cell, cell_t **prev,
                  maze_t *maze_i);
maze_t *move_left(cell_t **cur_cell, cell_t **prev,
                  maze_t *maze_i);
maze_t *move_right(cell_t **cur_cell, cell_t **prev,
                   maze_t *maze_i);
maze_t *last_check(maze_t *maze_i, int height, int width);
cell_t *find_way(cell_t *cur_cell, cell_t **prev,
                 maze_t **maze_i);
cell_t *add_node(cell_t *prev, int pos_x, int pos_y);
cell_t *delete_node(cell_t *prev);
void free_code (cell_t *cur_cell, cell_t *prev,
                maze_t *maze_i);
void free_chaine(char **str);
void free_list(cell_t **head);
void print_maze(maze_t *maze_i);
maze_t *final_maze(maze_t *maze_i, int perfect);
maze_t *last_perfect_check(maze_t *maze_i);
cell_t *find_perfect_way(cell_t *cur_cell, cell_t **prev,
                         maze_t **maze_i);
#endif
