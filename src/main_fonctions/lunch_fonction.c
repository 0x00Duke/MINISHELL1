/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** lunch_fonction.c
*/

#include "mysh.h"

void put_err(int status)
{
    put_error(strsignal(WTERMSIG(status)));
    if (WCOREDUMP(status))
        put_error(CORE_DUMP);
    put_error("\n");
}

char *pass_ex(control_t *control, char *command)
{
    char *tmp = command;

    tmp++;
    return (my_strcat(get_pwd(control), tmp));
}

control_t *lunch_executable(control_t *control, char **arg)
{
    int id;
    int status = 0;
    char **arr_env = env_array(control);

    arg[0]++;
    if (!arr_env)
        return (NULL);
    id = fork();
    if (id == -1)
        return (NULL);
    if (id == 0)
        execve(my_strcat(get_pwd(control), arg[0]), arg, arr_env);
    else
        waitpid(id, &status, 0);
    if (WIFSIGNALED(status))
        put_err(status);
    free_array(arr_env);
    return (control);
}

control_t *lunch_bin_fonc(control_t *control, char **arg, int x)
{
    int id;
    int status = 0;
    char **arr_env = env_array(control);
    char *path;

    if (!arr_env)
        return (NULL);
    path = my_strcat(put_slash(control->path[x]), arg[0]);
    id = fork();
    if (id == -1 || !path)
        return (NULL);
    if (id == 0)
        execve(path, arg, arr_env);
    else
        waitpid(id, &status, 0);
    if (WIFSIGNALED(status))
        put_err(status);
    free_array(arr_env);
    free(path);
    return (control);
}

control_t *luch_fonction(control_t *control, char **arg, fpointers_t *fonctions)
{
    int i = 0;
    int x;

    while (fonctions[i].fonc) {
        if (my_strcmp(arg[0], fonctions[i].name) == 0)
            return (fonctions[i].fonc(control, arg));
        i++;
    }
    if (access(pass_ex(control, arg[0]), X_OK) == 0)
        return (lunch_executable(control, arg));
    x = check_path(control, arg);
    if (x >= 0)
        return (lunch_bin_fonc(control, arg, x));
    put_error(arg[0]);
    put_error(CMD_NOT_FOUND);
    return (control);
}