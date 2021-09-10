/*
** EPITECH PROJECT, 2021
** move_left
** File description:
** No file there, just an eptiech header example
*/

#include "generator.h"
#include <stdlib.h>

maze_t *move_left(cell_t **cur_cell, cell_t **prev,
                      maze_t *maze_i)
{
    if (left_are_walls(cur_cell, maze_i) == 0) {
        maze_i->maze[(*cur_cell)->pos_x][(*cur_cell)->pos_y - 1] = '*';
        maze_i->maze[(*cur_cell)->pos_x][(*cur_cell)->pos_y - 2] = '*';
        maze_i->count = 0;
        if (move_is_valid(*cur_cell, &maze_i) >= 2 &&
            are_walls(cur_cell, maze_i) >= 1) {
            *prev = add_node(*prev, (*cur_cell)->pos_x, (*cur_cell)->pos_y);
        }
        while (maze_i->rd_nb == 3)
            maze_i->rd_nb = rand() % 4;
        (*cur_cell)->pos_y = (*cur_cell)->pos_y - 2;
        return (maze_i);
    }
    maze_i->count++;
    maze_i->rd_nb = 0;
    return (maze_i);
}
