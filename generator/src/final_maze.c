/*
** EPITECH PROJECT, 2021
** final_maze
** File description:
** No file there, just an epitech header example
*/

#include "generator.h"

maze_t *final_maze(maze_t *maze_i, int perfect)
{
    if (perfect != 1)
        maze_i = last_check(maze_i, maze_i->height, maze_i->width);
    else
        maze_i = last_perfect_check(maze_i);
    return (maze_i);
}
