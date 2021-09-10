/*
** EPITECH PROJECT, 2021
** random_cell
** File description:
** No file there,just an epitech header example
*/

#include "generator.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

cell_t *random_cell(cell_t *cur_cell, maze_t **maze_i)
{
    srand(time(NULL));
    cur_cell->pos_x = (rand() % (((*maze_i)->height - 1) - 0 + 1)) + 0;
    cur_cell->pos_y = (rand() % (((*maze_i)->width - 1) - 0 + 1)) + 0;
    if ((cur_cell->pos_x == 0 && cur_cell->pos_y == 0) ||
        (cur_cell->pos_x == (*maze_i)->height - 1 &&
             cur_cell->pos_y == (*maze_i)->width - 1))
        random_cell(cur_cell, maze_i);
    (*maze_i)->maze[cur_cell->pos_x][cur_cell->pos_y] = '*';
    return (cur_cell);
}
