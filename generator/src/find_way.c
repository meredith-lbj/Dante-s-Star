/*
** EPITECH PROJECT, 2021
** find_way
** File description:
** No file there, just an epitech header example
*/

#include "generator.h"
#include <stdlib.h>

cell_t *find_way(cell_t *cur_cell, cell_t **prev,
                     maze_t **maze_i)
{
    (*maze_i)->count = 0;
    *prev = delete_node(*prev);
    if (*prev != NULL &&
        move_is_valid(*prev, maze_i) >= 2 &&
        are_walls(prev, *maze_i) >= 2) {
        cur_cell->pos_x = (*prev)->pos_x;
        cur_cell->pos_y = (*prev)->pos_y;
        while ((*maze_i)->count < 4) {
            *maze_i = complex_maze(&cur_cell, prev, *maze_i);
        }
    }
    return (cur_cell);
}
