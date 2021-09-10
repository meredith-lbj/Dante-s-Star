/*
** EPITECH PROJECT, 2021
** move_up
** File description:
** No file there, just an epitech header example
*/

#include "generator.h"
#include <stdlib.h>

maze_t *move_up(cell_t **cur_cell, cell_t **prev,
                    maze_t *maze_i)
{
    if (up_are_walls(cur_cell, maze_i) == 0) {
        maze_i->maze[(*cur_cell)->pos_x - 1][(*cur_cell)->pos_y] = '*';
        maze_i->maze[(*cur_cell)->pos_x - 2][(*cur_cell)->pos_y] = '*';
        maze_i->count = 0;
        if (move_is_valid(*cur_cell, &maze_i) >= 2 &&
            are_walls(cur_cell, maze_i) >= 1) {
            *prev = add_node(*prev, (*cur_cell)->pos_x, (*cur_cell)->pos_y);
        }
        (*cur_cell)->pos_x = (*cur_cell)->pos_x - 2;
        while (maze_i->rd_nb == 0)
            maze_i->rd_nb = rand() % 4;
        return (maze_i);
    }
    maze_i->count++;
    maze_i->rd_nb++;
    return (maze_i);
}
