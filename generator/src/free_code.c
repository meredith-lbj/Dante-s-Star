/*
** EPITECH PROJECT, 2021
** free_code
** File description:
** No file there, just an epitech header example
*/

#include "generator.h"
#include <stdlib.h>

void free_code(cell_t *cur_cell, cell_t *prev,
                   maze_t *maze_i)
{
    free_chaine(maze_i->maze);
    free(cur_cell);
    free(maze_i);
    free_list(&prev);
}
