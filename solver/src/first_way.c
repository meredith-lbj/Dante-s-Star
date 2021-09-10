/*
** EPITECH PROJECT, 2021
** first_way
** File description:
** No file there, just an epitech header example
*/

#include "solver.h"
#include <stdio.h>
#include <stdlib.h>

maze_t *first_way(cell_t **cur_cell, cell_t **prev,
                      cell_t **way, maze_t *maze_i)
{
    switch (maze_i->rd_nb) {
    case 0:
        if (up_is_valid(*cur_cell, &maze_i, 0) == 1)
            return (first_way(cur_cell, prev, way, maze_i));
        return (move_up(cur_cell, prev, way, maze_i));
    case 1:
        if (down_is_valid(*cur_cell, &maze_i, 0) == 1)
            return (first_way(cur_cell, prev, way, maze_i));
        return (move_down(cur_cell, prev, way, maze_i));
    case 2:
        if (right_is_valid(*cur_cell, &maze_i, 0) == 1)
            return (first_way(cur_cell, prev, way, maze_i));
        return (move_right(cur_cell, prev, way, maze_i));
    case 3:
        if (left_is_valid(*cur_cell, &maze_i, 0) == 1)
            return (first_way(cur_cell, prev, way, maze_i));
        return (move_left(cur_cell, prev, way, maze_i));
    }
    return (maze_i);
}
