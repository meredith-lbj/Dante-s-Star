/*
** EPITECH PROJECT, 2021
** solver
** File description:
** No file there, just an epitech header example
*/

#include "solver.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int check_soluce(cell_t *cur_cell, cell_t *prev,
                 cell_t *way, maze_t *maze_i)
{
    if (cur_cell->pos_x != maze_i->height - 1 ||
        cur_cell->pos_y != maze_i->width - 1) {
        printf("no solution found\n");
        free_code(cur_cell, prev, way, maze_i);
        return (1);
    }
    return (0);
}

cell_t *init_struct(cell_t *cells, int pos_x, int pos_y)
{
    cells = (struct cell_s *)malloc(sizeof(cell_t));
    cells->pos_x = pos_x;
    cells->pos_y = pos_y;
    cells->next = NULL;
    return (cells);
}

int solver(char const *filepath)
{
    maze_t *maze_i = load_file_2d(filepath, maze_i);
    cell_t *cur_cell = init_struct(cur_cell, 0, 0);
    cell_t *way = init_struct(way, 0, 0);
    cell_t *prev = init_struct(prev, 0, 0);

    while (maze_i->count != 4) {
        if (check_cell(cur_cell, prev, way, maze_i) == 1)
            return (0);
        maze_i = first_way(&cur_cell, &prev, &way, maze_i);
    }
    //print_maze(maze_i);
    while (prev != NULL) {
        if (check_cell(cur_cell, prev, way, maze_i) == 1)
            return (0);
        maze_i = final_way(&cur_cell, &prev, &way, maze_i);
    }
    if (check_soluce(cur_cell, prev, way, maze_i) == 1)
        return (0);
    print_maze(maze_i);
    free_code(cur_cell, prev, way, maze_i);
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        write(2, "Invalid file\n", 13);
        return (84);
    }
    solver(argv[1]);
    return (0);
}
