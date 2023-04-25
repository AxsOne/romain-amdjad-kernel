/*
** EPITECH PROJECT, 2023
** my
** File description:
** my
*/
#pragma once
#include <stdlib.h>

typedef struct save_byte_s {
    int byte;
    char c;
    char str[40];
} save_byte_t;

typedef struct calc_s {
    int command;
    int args_1;
    int args_2;
    char *str_2;
} calc_t;

char **mstwa(char *str, char const *sep);
int my_strlen(char const *str);
