/*
** EPITECH PROJECT, 2021
** get_len
** File description:
** No file there, just an epitech header example
*/

#include "solver.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int cols_count(char *str)
{
    int cols = 0;

    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] == '\n')
            cols++;
    }
    cols++;
    return (cols);
}

int rows_count(char *str)
{
    int rows = 0;
    int count = 0;

    while (str[rows] != '\n') {
        rows++;
    }
    return (rows);
}

int check_line(char *str)
{
    int	count =	0;
    int count2 = 0;

    count2 = rows_count(str);
    for (int i = count2 + 1 ; str[i] != '\0' ; i++) {
        if (str[i] == '\n' && count2 != count)
            return (1);
        if (str[i] == '\n')
            count = 0;
        else
            count++;
    }
    return (0);
}

maze_t *get_len(char *str, maze_t *maze_i)
{
    if (check_line(str) == 1) {
        free(str);
        free(maze_i);
        write(2, "Invalid file\n", 13);
        exit(84);
    }
    maze_i->width = rows_count(str);
    maze_i->height = cols_count(str);
    return (maze_i);
}
