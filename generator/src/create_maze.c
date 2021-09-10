/*
** EPITECH PROJECT, 2021
** create_maze
** File description:
** No file there, just an epitech header example
*/

#include "generator.h"
#include <stdlib.h>

char **create_maze(maze_t *maze_i)
{
    for (int i = 0 ; i < maze_i->height ; i++) {
        for (int j = 0 ; j < maze_i->width ; j++) {
            maze_i->maze[i][j] = 'X';
        }
    }
    return (maze_i->maze);
}
