/*
** EPITECH PROJECT, 2021
** complex_maze
** File description:
** No file there, just an epitech header example
*/

#include "generator.h"

maze_t *complex_maze(cell_t **cur_cell, cell_t **prev,
                         maze_t *maze_i)
{
    switch (maze_i->rd_nb) {
    case 0:
        if (up_is_valid(*cur_cell, &maze_i, 0) == 1)
            return (complex_maze(cur_cell, prev, maze_i));
        return (move_up(cur_cell, prev, maze_i));
    case 1:
        if (down_is_valid(*cur_cell, &maze_i, 0) == 1)
            return (complex_maze(cur_cell, prev, maze_i));
        return (move_down(cur_cell, prev, maze_i));
    case 2:
        if (right_is_valid(*cur_cell, &maze_i, 0) == 1)
            return (complex_maze(cur_cell, prev, maze_i));
        return (move_right(cur_cell, prev, maze_i));
    case 3:
        if (left_is_valid(*cur_cell, &maze_i, 0) == 1)
            return (complex_maze(cur_cell, prev, maze_i));
        return (move_left(cur_cell, prev, maze_i));
    }
    return (maze_i);
}
