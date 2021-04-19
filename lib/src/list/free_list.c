/*
** EPITECH PROJECT, 2020
** B-CPE-110-BAR-1-1-antman-javier.sanchez-castro
** File description:
** free_list.c
*/

#include "lib.h"
#include <stdlib.h>

void free_list(control_t *control)
{
    while (control->first->next) {
        control->first = control->first->next;
        free(control->first->prev->name);
        free(control->first->prev->value);
        free(control->first->prev);
    }
    free(control->first->name);
    free(control->first->value);
    free(control->first);
    if (control->path)
        free_array(control->path);
    free(control);
}