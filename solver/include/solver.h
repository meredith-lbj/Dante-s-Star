/*
** EPITECH PROJECT, 2021
** solver
** File description:
** No file there, just an epitech header example
*/

#ifndef SOLVER_H_
#define SOLVER_H_
#include <stdio.h>
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
maze_t *init_maze(maze_t *maze_i);
int check_move(maze_t *maze_i, int pos_x, int pos_y);
int up_is_valid(cell_t *cur_cell,  maze_t **maze_i,
                int add_way);
int down_is_valid(cell_t *cur_cell,  maze_t **maze_i,
                  int add_way);
int right_is_valid(cell_t *cur_cell,  maze_t **maze_i,
                   int add_way);
int left_is_valid(cell_t *cur_cell,  maze_t **maze_i,
                  int add_way);
int move_is_valid(cell_t *cur_cell, maze_t **maze_i);
int are_ways(cell_t **cur_cell, maze_t *maze_i);
int up_is_way(cell_t **cur_cell, maze_t *maze_i);
int down_is_way(cell_t **cur_cell, maze_t *maze_i);
int right_is_way(cell_t **cur_cell, maze_t *maze_i);
int left_is_way(cell_t **cur_cell, maze_t *maze_i);
maze_t *move_up(cell_t **cur_cell, cell_t **prev,
                cell_t **way, maze_t *maze_i);
maze_t *move_down(cell_t **cur_cell, cell_t **prev,
                  cell_t **way, maze_t *maze_i);
maze_t *move_left(cell_t **cur_cell, cell_t **prev,
                  cell_t **way, maze_t *maze_i);
maze_t *move_right(cell_t **cur_cell, cell_t **prev,
                   cell_t **way, maze_t *maze_i);
maze_t *first_way(cell_t **cur_cell, cell_t **prev,
                  cell_t **way, maze_t *maze_i);
maze_t *final_way(cell_t **cur_cell, cell_t **prev,
                  cell_t **way, maze_t *maze_i);
int check_cell(cell_t *cur_cell, cell_t *prev,
               cell_t *way, maze_t *maze_i);
maze_t *get_len(char *str, maze_t *maze_i);
maze_t *load_file_2d(char const *filepath, maze_t *maze_i);
cell_t *delete_node(cell_t *prev);
cell_t *add_node(cell_t *prev, int pos_x, int pos_y);
int rows_count(char *str);
int check_problem(char *file);
void print_maze(maze_t *maze_i);
void free_list(cell_t **head);
void free_code (cell_t *cur_cell, cell_t *prev,
                cell_t *way, maze_t *maze_i);
#endif
