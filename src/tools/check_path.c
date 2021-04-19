/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** check_path.c
*/

#include "mysh.h"

int check_path(control_t *control, char **arg)
{
    int x = 0;
    char *path;
    char *command = my_strcat("/", arg[0]);

    if (!command)
        return (-84);
    while (control->path[x]) {
        path = my_strcat(control->path[x], command);
        if (!path)
            return (-84);
        if (access(path, X_OK) == 0) {
            free(command);
            free(path);
            return (x);
        }
        free(path);
        x++;
    }
    return (-2);
}