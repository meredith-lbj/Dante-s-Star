/*
** EPITECH PROJECT, 2021
** move_is_valid
** File description:
** No file there, just an epitech header example
*/

#include "solver.h"
#include <stdio.h>

int up_is_valid(cell_t *cur_cell,  maze_t **maze_i,
                    int add_way)
{
    if (check_move(*maze_i, cur_cell->pos_x - 1, cur_cell->pos_y) == 1) {
        if (add_way != 2) {
            (*maze_i)->count++;
            (*maze_i)->rd_nb++;
        }
        return (1);
    }
    return (0);
}

int down_is_valid(cell_t *cur_cell,  maze_t **maze_i,
                      int add_way)
{
    if (check_move(*maze_i, cur_cell->pos_x + 1, cur_cell->pos_y) == 1) {
        if (add_way != 2) {
            (*maze_i)->count++;
            (*maze_i)->rd_nb++;
        }
        return (1);
    }
    return (0);
}

int right_is_valid(cell_t *cur_cell,  maze_t **maze_i,
                       int add_way)
{
    if (check_move(*maze_i, cur_cell->pos_x, cur_cell->pos_y + 1) == 1) {
        if (add_way != 2) {
            (*maze_i)->count++;
            (*maze_i)->rd_nb++;
        }
        return (1);
    }
    return (0);
}

int left_is_valid(cell_t *cur_cell,  maze_t **maze_i,
                      int add_way)
{
    if (check_move(*maze_i, cur_cell->pos_x, cur_cell->pos_y - 1) == 1) {
        if (add_way != 2) {
            (*maze_i)->count++;
            (*maze_i)->rd_nb = 0;
        }
        return (1);
    }
    return (0);
}

int move_is_valid(cell_t *cur_cell, maze_t **maze_i)
{
    int count = 0;

    if (up_is_valid(cur_cell, maze_i, 2) == 0)
        count++;
    if (down_is_valid(cur_cell, maze_i, 2) == 0)
        count++;
    if (right_is_valid(cur_cell, maze_i, 2) == 0)
        count++;
    if (left_is_valid(cur_cell, maze_i, 2) == 0)
        count++;
    return (count);
}
