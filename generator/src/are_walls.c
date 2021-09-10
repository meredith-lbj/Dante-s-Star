/*
** EPITECH PROJECT, 2021
** are_walls
** File description:
** No file there, just an epitech header example
*/

#include "generator.h"

int up_are_walls(cell_t **cur_cell, maze_t *maze_i)
{
    if (check_move(maze_i, (*cur_cell)->pos_x - 1, (*cur_cell)->pos_y) == 1)
        return (1);
    if (check_move(maze_i, (*cur_cell)->pos_x - 2, (*cur_cell)->pos_y) == 1)
        return (1);
    if (maze_i->maze[(*cur_cell)->pos_x - 1][(*cur_cell)->pos_y] == 'X' &&
        maze_i->maze[(*cur_cell)->pos_x - 2][(*cur_cell)->pos_y] == 'X')
        return (0);
    return (1);
}

int down_are_walls(cell_t **cur_cell, maze_t *maze_i)
{
    if (check_move(maze_i, (*cur_cell)->pos_x + 1, (*cur_cell)->pos_y) == 1)
        return (1);
    if (check_move(maze_i, (*cur_cell)->pos_x + 2, (*cur_cell)->pos_y) == 1)
        return (1);
    if (maze_i->maze[(*cur_cell)->pos_x + 1][(*cur_cell)->pos_y] == 'X' &&
        maze_i->maze[(*cur_cell)->pos_x + 2][(*cur_cell)->pos_y] == 'X')
        return (0);
    return (1);
}

int right_are_walls(cell_t **cur_cell, maze_t *maze_i)
{
    if (check_move(maze_i, (*cur_cell)->pos_x, (*cur_cell)->pos_y + 1) == 1)
        return (1);
    if (check_move(maze_i, (*cur_cell)->pos_x, (*cur_cell)->pos_y + 2) == 1)
        return (1);
    if (maze_i->maze[(*cur_cell)->pos_x][(*cur_cell)->pos_y + 1] == 'X' &&
        maze_i->maze[(*cur_cell)->pos_x][(*cur_cell)->pos_y + 2] == 'X')
        return (0);
    return (1);
}

int left_are_walls(cell_t **cur_cell, maze_t *maze_i)
{
    if (check_move(maze_i, (*cur_cell)->pos_x, (*cur_cell)->pos_y - 1) == 1)
        return (1);
    if (check_move(maze_i, (*cur_cell)->pos_x, (*cur_cell)->pos_y - 2) == 1)
        return (1);
    if (maze_i->maze[(*cur_cell)->pos_x][(*cur_cell)->pos_y - 1] == 'X' &&
        maze_i->maze[(*cur_cell)->pos_x][(*cur_cell)->pos_y - 2] == 'X')
        return (0);
    return (1);
}

int are_walls(cell_t **cur_cell, maze_t *maze_i)
{
    int	count =	0;

    if (left_are_walls(cur_cell, maze_i) == 0) {
        count++;
    }
    if (up_are_walls(cur_cell, maze_i) == 0) {
        count++;
    }
    if (down_are_walls(cur_cell, maze_i) == 0) {
        count++;
    }
    if (right_are_walls(cur_cell, maze_i) == 0) {
        count++;
    }
    return (count);
}
