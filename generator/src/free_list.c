/*
** EPITECH PROJECT, 2020
** free_list
** File description:
** No file there, just an epitech header example
*/

#include "generator.h"
#include <stdlib.h>

void free_list(cell_t **head)
{
    cell_t *ptr = NULL;

    ptr = *head;
    while (ptr != NULL) {
        ptr = ptr->next;
        free(*head);
        *head = ptr;
    }
    free(ptr);
}
