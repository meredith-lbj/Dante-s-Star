/*
** EPITECH PROJECT, 2021
** load_file_2d
** File description:
** No file there, just an epitech header example
*/

#include "solver.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int check_chr(char *str, maze_t *maze_i)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if ((str[i] != 'X' && str[i] != '*') &&
            str[i] != '\n') {
            free(str);
            free(maze_i);
            write(2, "Invalid file\n", 13);
            exit(84);
        }
    }
    return (0);
}

maze_t *fill_map(maze_t *maze_i, char const *str)
{
    int x = 0;
    int y = 0;

    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] == '\n') {
            x++;
            y = 0;
        }
        else {
            maze_i->maze[x][y] = str[i];
            y++;
        }
    }
    maze_i->maze[0][0] = 'o';
    return (maze_i);
}

maze_t *alloc_mem(char *str, maze_t *maze_i)
{
    maze_i = get_len(str, maze_i);
    maze_i->maze = malloc(sizeof(char *) * (maze_i->height + 1));
    maze_i->maze[maze_i->height] = NULL;
    for (int i = 0 ; i < maze_i->height ; i++) {
            maze_i->maze[i] = malloc(sizeof(char) * (maze_i->width + 1));
            maze_i->maze[i][maze_i->width] = '\0';
    }
    maze_i = fill_map(maze_i, str);
    return (maze_i);
}

char *read_file(char const *filepath, char *str, int fd)
{
    struct stat fileStat;

    stat(filepath, &fileStat);
    if (fileStat.st_size <= 0) {
        write(2, "Invalid file\n", 13);
        close(fd);
        exit(84);
    }
    str = malloc(sizeof(char) * (fileStat.st_size + 1));
    str[fileStat.st_size] = '\0';
    read(fd, str, fileStat.st_size);
    close(fd);
    return (str);
}

maze_t *load_file_2d(char const *filepath, maze_t *maze_i)
{
    int	fd;
    char *str = NULL;

    if ((fd = open(filepath, O_RDONLY)) != -1) {
        str = read_file(filepath, str, fd);
        check_problem(str);
        maze_i = init_maze(maze_i);
        check_chr(str, maze_i);
        maze_i = alloc_mem(str, maze_i);
        free(str);
    }
    else {
        write(2, "Invalid file\n", 13);
        exit(84);
    }
    return (maze_i);
}
