/*
** EPITECH PROJECT, 2021
** print_maze
** File description:
** No file there, just an epitech header example
*/

#include "generator.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void print_maze(maze_t *maze_i)
{
    for (int i = 0 ; i < maze_i->height - 1 ; i++)
        printf("%s\n", maze_i->maze[i]);
    printf("%s", maze_i->maze[maze_i->height - 1]);
    fflush(stdout);
}
