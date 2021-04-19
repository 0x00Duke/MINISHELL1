/*
** EPITECH PROJECT, 2020
** lib
** File description:
** split
*/

#include "lib.h"

int start_x(char *str, char *del)
{
    int x = 0;

    while (char_in_str(del, str[x]) && str[x])
        x++;
    return (x);
}

int get_num_word(char *str, char *del)
{
    int x = 0;
    int num_word = 1;

    while (str[x]) {
        while (char_in_str(del, str[x]) && !char_in_str(del, str[x + 1])
        && str[x + 1] != '\0') {
            num_word++;
            x++;
        }
        x++;
    }
    return (num_word);
}

int word_len(char *str, int x, char *del)
{
    int len = 0;

    while (!char_in_str(del, str[x]) && str[x]) {
        x += 1;
        len += 1;
    }
    return (len);
}

char **split(char *str, char *del)
{
    int i = 0;
    int x = start_x(str, del);
    int num_word = get_num_word(str, del);
    char **array = malloc(sizeof(char *) * (num_word + 1));

    while (str[x]) {
        int n = 0;
        array[i] = malloc(sizeof(char) * (word_len(str, x, del) + 1));
        while (!char_in_str(del, str[x]) && str[x]) {
            array[i][n] = str[x];
            n += 1;
            x += 1;
        }
        array[i++][n] = '\0';
        while (char_in_str(del, str[x]) && str[x])
            x++;
    }
    array[i] = NULL;
    return (array);
}