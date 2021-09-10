/*
** EPITECH PROJECT, 2021
** check_cell
** File description:
** No file there, just an epitech header example
*/

#include "solver.h"
#include <stdio.h>
#include <stdlib.h>

int check_cell(cell_t *cur_cell, cell_t *prev,
                   cell_t *way, maze_t *maze_i)
{
    if (cur_cell->pos_x == maze_i->height - 1 &&
        cur_cell->pos_y == maze_i->width - 1) {
        print_maze(maze_i);
        free_code(cur_cell, prev, way, maze_i);
        return (1);
    }
    return (0);
}
