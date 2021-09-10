/*
** EPITECH PROJECT, 2021
** alloc_mem
** File description:
** No file there, just an epitech header example
*/

#include <stdlib.h>
#include "generator.h"

char **alloc_mem(maze_t *maze_i)
{
    maze_i->maze = malloc(sizeof(char *) * (maze_i->height + 1));
    maze_i->maze[maze_i->height] = NULL;
    for (int i = 0 ; i < maze_i->height ; i++) {
        maze_i->maze[i] = malloc(sizeof(char) * (maze_i->width + 1));
        maze_i->maze[i][maze_i->width] = '\0';
        for (int j = 0 ; j < maze_i->width ; j++)
            maze_i->maze[i][j] = '*';
    }
    return (maze_i->maze);
}
