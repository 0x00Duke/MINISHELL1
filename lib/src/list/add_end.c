/*
** EPITECH PROJECT, 2020
** add_end.c
** File description:
** add element at the end of the list
*/

#include "lib.h"

control_t *add_end(control_t *list, char *name, char *value)
{
    list_t *elem = create_elem(name, value);

    if (elem == NULL)
        return (NULL);
    if (list->last == NULL) {
        list->first = elem;
        list->last = elem;
        list->size = 1;
        return (list);
    }
    list->last->next = elem;
    elem->prev = list->last;
    list->last = elem;
    list->size++;
    return (list);
}
