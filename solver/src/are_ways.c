/*
** EPITECH PROJECT, 2021
** are_ways
** File description:
** No file there, just an epitech header example
*/

#include "solver.h"

int up_is_way(cell_t **cur_cell, maze_t *maze_i)
{
    if (check_move(maze_i, (*cur_cell)->pos_x - 1, (*cur_cell)->pos_y) == 1)
        return (1);
    if (maze_i->maze[(*cur_cell)->pos_x - 1][(*cur_cell)->pos_y] == '*')
        return (0);
    return (1);
}

int down_is_way(cell_t **cur_cell, maze_t *maze_i)
{
    if (check_move(maze_i, (*cur_cell)->pos_x + 1, (*cur_cell)->pos_y) == 1)
        return (1);
    if (maze_i->maze[(*cur_cell)->pos_x + 1][(*cur_cell)->pos_y] == '*')
        return (0);
    return (1);
}

int right_is_way(cell_t **cur_cell, maze_t *maze_i)
{
    if (check_move(maze_i, (*cur_cell)->pos_x, (*cur_cell)->pos_y + 1) == 1)
        return (1);
    if (maze_i->maze[(*cur_cell)->pos_x][(*cur_cell)->pos_y + 1] == '*')
        return (0);
    return (1);
}

int left_is_way(cell_t **cur_cell, maze_t *maze_i)
{
    if (check_move(maze_i, (*cur_cell)->pos_x, (*cur_cell)->pos_y - 1) == 1)
        return (1);
    if (maze_i->maze[(*cur_cell)->pos_x][(*cur_cell)->pos_y - 1] == '*')
        return (0);
    return (1);
}

int are_ways(cell_t **cur_cell, maze_t *maze_i)
{
    int	count =	0;

    if (left_is_way(cur_cell, maze_i) == 0) {
        count++;
    }
    if (up_is_way(cur_cell, maze_i) == 0) {
        count++;
    }
    if (down_is_way(cur_cell, maze_i) == 0) {
        count++;
    }
    if (right_is_way(cur_cell, maze_i) == 0) {
        count++;
    }
    return (count);
}
