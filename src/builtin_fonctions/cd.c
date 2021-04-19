/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** cd.c
*/

#include "mysh.h"

control_t *my_cd(control_t *control, char **arg)
{
    char *old = get_pwd(control);

    if (size_array(arg) > 2) {
        put_error(CD_MANY_ARG);
        return (control);
    }
    if (!arg[1] || my_strcmp(arg[1], "") == 0 || my_strcmp(arg[1], "--") == 0) {
        if (chdir(get_home(control)) == -1)
            return (control);
        control = my_set_env(control, get_arr_arg("HOME", get_home(control)));
    } else if (my_strcmp(arg[1], "-") == 0) {
        if (chdir(get_oldpwd(control)) == -1)
            return (control);
        control = my_set_env(control, get_arr_arg("PWD", get_pwd(control)));
    } else {
        if (chdir(my_strcat(put_slash(get_pwd(control)), arg[1])) == -1) {
            put_error(my_strcat(arg[1], ERR_CD));
            return (control);
        }
    }
    return (my_set_env(control, get_arr_arg("OLDPWD", old)));
}