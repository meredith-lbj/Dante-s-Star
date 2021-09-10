/*
** EPITECH PROJECT, 2021
** last_perfect_check
** File description:
** No file there, just an epitech header example
*/

#include "generator.h"
#include <stdlib.h>

int no_start_way(maze_t *maze_i)
{
    if (maze_i->maze[0][1] == 'X' &&
        maze_i->maze[1][0] == 'X')
        return (1);
    return (0);
}

int no_end_way(maze_t *maze_i, int height, int width)
{
    if (maze_i->maze[height - 1][width - 2] == 'X' &&
        maze_i->maze[height - 2][width - 1] == 'X')
        return (1);
    return (0);
}

maze_t *check_end(maze_t *maze_i, int height, int width)
{
    if (maze_i->maze[height - 1][width - 2] == 'X' &&
        maze_i->maze[height - 2][width - 2] == '*') {
        maze_i->maze[height - 1][width - 2] = '*';
    }
    else if (maze_i->maze[height - 2][width - 2] == 'X' &&
        maze_i->maze[height - 2][width - 2] == '*') {
        maze_i->maze[height - 2][width - 2] = '*';
    }
    return (maze_i);
}

maze_t *check_start(maze_t *maze_i)
{
    if (maze_i->maze[0][1] == 'X' &&
        maze_i->maze[1][1] == '*') {
        maze_i->maze[0][1] = '*';
    }
    else if (maze_i->maze[1][0] == 'X' &&
        maze_i->maze[1][1] == '*') {
        maze_i->maze[1][0] = '*';
    }
    return (maze_i);
}

maze_t *last_perfect_check(maze_t *maze_i)
{
    maze_i->maze[0][0] = '*';
    maze_i->maze[maze_i->height - 1][maze_i->width - 1] = '*';
    if (no_start_way(maze_i) == 1)
        maze_i = check_start(maze_i);
    if (no_end_way(maze_i, maze_i->height, maze_i->width) == 1)
        maze_i = check_end(maze_i, maze_i->height, maze_i->width);
    return (maze_i);
}
