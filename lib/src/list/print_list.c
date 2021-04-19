/*
** EPITECH PROJECT, 2020
** print_list.c
** File description:
** print a list
*/

#include "lib.h"

void print_list(list_t *list)
{
    list_t *temp = list;

    while (temp != NULL) {
        my_printf("%s=%s\n", temp->name, temp->value);
        temp = temp->next;
    }
}
