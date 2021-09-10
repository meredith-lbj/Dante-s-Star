/*
** EPITECH PROJECT, 2021
** last_check
** File description:
** No file there, just an epitech header example
*/

#include "generator.h"
#include <stdlib.h>

int wall_count(maze_t *maze_i, int pos_x, int pos_y)
{
    int count = 0;

    if (check_move(maze_i, pos_x + 1, pos_y) == 0 &&
        maze_i->maze[pos_x + 1][pos_y] == 'X')
        count++;
    if (check_move(maze_i, pos_x - 1, pos_y) == 0 &&
        maze_i->maze[pos_x - 1][pos_y] == 'X')
        count++;
    if (check_move(maze_i, pos_x, pos_y + 1) == 0 &&
        maze_i->maze[pos_x][pos_y + 1] == 'X')
        count++;
    if (check_move(maze_i, pos_x, pos_y - 1) == 0 &&
        maze_i->maze[pos_x][pos_y - 1] == 'X')
        count++;
    return (count);
}

maze_t *last_check(maze_t *maze_i, int height, int width)
{
    for (size_t x = 0 ; maze_i->maze[x] != NULL ; x++) {
        for (size_t y = 0 ; maze_i->maze[x][y] != '\0' ; y++) {
            if (wall_count(maze_i, x, y) > 2)
                maze_i->maze[x][y] = '*';
        }
    }
    maze_i->maze[0][0] = '*';
    maze_i->maze[0][1] = '*';
    maze_i->maze[1][0] = '*';
    maze_i->maze[1][1] = '*';
    maze_i->maze[height - 1][width - 1] = '*';
    maze_i->maze[height - 1][width - 2] = '*';
    maze_i->maze[height - 2][width - 1] = '*';
    maze_i->maze[height - 2][width - 2] = '*';
    return (maze_i);
}
