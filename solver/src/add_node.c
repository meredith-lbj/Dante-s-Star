/*
** EPITECH PROJECT, 2021
** add_node
** File description:
** No file there, just an epitech header example
*/

#include "solver.h"
#include <stdlib.h>

cell_t *add_node(cell_t *prev, int pos_x, int pos_y)
{
    cell_t *ptr = prev;

    ptr = (struct cell_s *)malloc(sizeof(cell_t));
    ptr->pos_x = pos_x;
    ptr->pos_y = pos_y;
    ptr->next = prev;
    prev = ptr;
    return (prev);
}
