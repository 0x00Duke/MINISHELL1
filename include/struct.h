/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** struct.h
*/

#ifndef STRUCT_H
#define STRUCT_H

#include "list.h"

typedef struct fpointers_s
{
    control_t *(*fonc)(control_t *, char **);
    char *name;
} fpointers_t;


#endif