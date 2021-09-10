/*
** EPITECH PROJECT, 2021
** check_move
** File description:
** No file there, just an epitech header example
*/

#include "solver.h"

int check_move(maze_t *maze_i, int pos_x, int pos_y)
{
    if (maze_i->height - 1 < pos_x || 0 > pos_x)
        return (1);
    if (maze_i->width - 1 < pos_y || 0 > pos_y)
        return (1);
    return (0);
}
