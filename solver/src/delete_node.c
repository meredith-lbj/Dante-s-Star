/*
** EPITECH PROJECT, 2021
** delete_node
** File description:
** No file there, just an epitech header example
*/

#include <stdlib.h>
#include "solver.h"

cell_t *delete_node(cell_t *prev)
{
    cell_t *ptr = prev->next;

    free(prev);
    prev = ptr;
    return (prev);
}
