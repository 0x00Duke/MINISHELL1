/*
** EPITECH PROJECT, 2020
** B-PSU-101-BAR-1-1-minishell1-leon.ducasse
** File description:
** maccro.h
*/

#ifndef MACCRO_H
#define MACCRO_H

#define NB_FUNCT 5

#define EXIT "exit\n"
#define EXIT_SYNTAX "exit: Expression Syntax.\n"
#define EXIT_BADNB "exit: Badly formed number.\n"

#define CMD_NOT_FOUND ": Command not found.\n"

#define MANY_ARG "setenv: Too many arguments.\n"
#define ALPHANUM "setenv: Variable name must contain alphanumeric \
characters.\n"

#define CD_MANY_ARG "cd: Too many arguments.\n"
#define ERR_CD ": No such file or directory.\n"

#define CORE_DUMP " (core dumped)"

#define FEW_ARG_UNSET "unsetenv: Too few arguments.\n"

#define RESCUE_PATH "/home/dleon/.local/bin:/home/dleon/bin:/usr/local/bin:\
/usr/bin:/bin:/usr/local/sbin:/usr/sbin:/var/lib/snapd/snap/bin"


#define RED "\033[0;31m"
#define BLUE "\033[0;34m"
#define WHITE "\033[0;37m"

#endif