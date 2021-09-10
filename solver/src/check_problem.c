/*
** EPITECH PROJECT, 2021
** check_problem
** File description:
** No file there, just an epitech header exampel
*/

#include "solver.h"
#include <stdlib.h>

int check_problem(char *file)
{
    int i = 0;

    while (file[i] != '\0')
        i++;
    if (file[1] == 'X' &&
        file[rows_count(file) + 1] == 'X') {
        printf("no solution found\n");
        free(file);
        exit(0);
    }
    if (file[i - 3] == 'X' &&
        file[i - rows_count(file) - 3] == 'X') {
        printf("no solution found\n");
        free(file);
        exit(0);
    }
    return (0);
}
