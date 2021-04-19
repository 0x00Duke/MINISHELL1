/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** put_slash.c
*/

#include "mysh.h"

char *put_slash(char *str)
{
    return (my_strcat(str, "/"));
}