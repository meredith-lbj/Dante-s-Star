/*
** EPITECH PROJECT, 2021
** final_way
** File description:
** No file there, just an epitech header example
*/

#include "solver.h"
#include <stdlib.h>
#include <stdio.h>
maze_t *remove_way(cell_t **prev, cell_t **way, maze_t *maze_i)
{
    while ((*way)->pos_x != (*prev)->pos_x ||
           (*way)->pos_y != (*prev)->pos_y) {
        maze_i->maze[(*way)->pos_x][(*way)->pos_y] = 'R';
        *way = delete_node(*way);
    }
    return (maze_i);
}

maze_t *final_way(cell_t **cur_cell, cell_t **prev,
                  cell_t **way, maze_t *maze_i)
{
    maze_i->count = 0;
    if (*prev != NULL) {
        maze_i = remove_way(prev, way, maze_i);
        if (move_is_valid(*way, &maze_i) >= 2 &&
            are_ways(way, maze_i) <= 1)
            *prev = delete_node(*prev);
        if (move_is_valid(*way, &maze_i) >= 2 &&
            are_ways(way, maze_i) >= 1) {
            (*cur_cell)->pos_x = (*way)->pos_x;
            (*cur_cell)->pos_y = (*way)->pos_y;
            //printf("--------------\n");
            //print_maze(maze_i);
            while (maze_i->count < 4) {
                if (check_cell(*cur_cell, *prev, *way, maze_i) == 1)
                    exit(0);
                maze_i = first_way(cur_cell, prev, way, maze_i);
            }
        }
    }
    return (maze_i);
}
