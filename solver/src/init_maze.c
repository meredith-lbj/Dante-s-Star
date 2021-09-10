/*
** EPITECH PROJECT, 2021
** init_maze
** File description:
** No file there, just an epitech header example
*/

#include "solver.h"
#include <stdlib.h>

maze_t *init_maze(maze_t *maze_i)
{
    maze_i = (struct maze_s *)malloc(sizeof(maze_t));
    maze_i->width = 0;
    maze_i->height = 0;
    maze_i->count = 0;
    maze_i->rd_nb = rand() % 4;
    maze_i->maze = NULL;
    return (maze_i);
}
