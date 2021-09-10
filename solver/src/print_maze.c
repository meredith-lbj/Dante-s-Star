/*
** EPITECH PROJECT, 2021
** print_maze
** File description:
** No file there, just an epitech header example
*/

#include "solver.h"
#include <stdio.h>
#include <unistd.h>

char **final_maze(char **maze)
{
    for (int i = 0 ; maze[i] != NULL ; i++) {
        for (int j = 0 ; maze[i][j] != '\0' ; j++) {
            if (maze[i][j] == 'R')
                maze[i][j] = '*';
        }
    }
    return (maze);
}

void print_maze(maze_t *maze_i)
{
    maze_i->maze = final_maze(maze_i->maze);
    for (int i = 0 ; i < maze_i->height - 1 ; i++)
        printf("%s\n", maze_i->maze[i]);
    printf("%s", maze_i->maze[maze_i->height - 1]);
    fflush(stdout);
}
