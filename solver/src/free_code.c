/*
** EPITECH PROJECT, 2021
** free_code
** File description:
** No file there, just an epitech header example
*/

#include "solver.h"
#include <stdlib.h>

void free_code(cell_t *cur_cell, cell_t *prev,
                   cell_t *way, maze_t *maze_i)
{
    free_list(&way);
    free(cur_cell);
    free_list(&prev);
    free_chaine(maze_i->maze);
    free(maze_i);

}
