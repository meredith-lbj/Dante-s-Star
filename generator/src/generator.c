/*
** EPITECH PROJECT, 2021
** generator
** File description:
** No file there, just ane pitech header example
*/

#include "generator.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

cell_t *init_struct(cell_t *cells, int pos_x, int pos_y)
{
    cells = (struct cell_s *)malloc(sizeof(cell_t));
    cells->pos_x = pos_x;
    cells->pos_y = pos_y;
    cells->next = NULL;
    return (cells);
}

maze_t *init_maze(maze_t *maze_i, int height, int width)
{
    maze_i = (struct maze_s *)malloc(sizeof(maze_t));
    maze_i->width = width;
    maze_i->height = height;
    maze_i->count = 0;
    maze_i->rd_nb = rand() % 4;
    maze_i->maze = alloc_mem(maze_i);
    maze_i->maze = create_maze(maze_i);
    return (maze_i);
}

int generator(int height, int width, int perfect)
{
    cell_t *cur_cell = init_struct(cur_cell, 0, 0);
    cell_t *prev = NULL;
    maze_t *maze_i = init_maze(maze_i, height, width);

    cur_cell = random_cell(cur_cell, &maze_i);
    prev = init_struct(prev, cur_cell->pos_x, cur_cell->pos_y);
    while (maze_i->count < 4)
        maze_i = complex_maze(&cur_cell, &prev, maze_i);
    while (prev != NULL) {
        if (perfect != 1)
            cur_cell = find_way(cur_cell, &prev, &maze_i);
        else
            cur_cell = find_perfect_way(cur_cell, &prev, &maze_i);
    }
    maze_i = final_maze(maze_i, perfect);
    print_maze(maze_i);
    free_code(cur_cell, prev, maze_i);
    return (0);
}

int check_input(char *str1, char *str2)
{
    if (my_str_isnum(str1) == 1)
        return (1);
    if (my_str_isnum(str2) == 1)
        return (1);
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc != 3 && argc != 4)
        return (84);
    if (check_input(argv[1], argv[2]) == 1) {
        printf("Invalid inputs\n");
        return (84);
    }
    if (argc == 4 && strcmp(argv[3], "perfect") == 1) {
        printf("Invalid inputs\n");
        return (84);
    }
    if (argc == 4 && strcmp(argv[3], "perfect") == 0)
        generator(my_getnbr(argv[2]), my_getnbr(argv[1]), 1);
    else
        generator(my_getnbr(argv[2]), my_getnbr(argv[1]), 0);
    return (0);
}
