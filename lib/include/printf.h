/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_printf.h
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "lib.h"


#ifndef PRINTF_H_
#define PRINTF_H_

typedef struct s_flag_printf {
    int (*ptr)(va_list);
    char flag;
} t_flag_printf;

int my_printf(char *str, ...);
int count_printed_char(int i);
int flag_int(va_list ap);
int flag_char(va_list ap);
int flag_str(va_list ap);
int flag_binary(va_list ap);
int flag_hexa_upper(va_list ap);
int flag_hexa_low(va_list ap);
int flag_octal(va_list ap);
int flag_percent();
int flag_pointer(va_list ap);
int flag_unsigned_int(va_list ap);
t_flag_printf *create_fill_array(void);
t_flag_printf *create_fill_array_two(void);
void run_flag_function(va_list ap, char c);

#endif