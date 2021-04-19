/*
** EPITECH PROJECT, 2020
** len_lsit.c
** File description:
** know the len of a list
*/

#include "lib.h"

int len_list(list_t *list)
{
    int i = 0;
    while (list != NULL){
        list = list->next;
        i++;
    }
    return (i);
}
