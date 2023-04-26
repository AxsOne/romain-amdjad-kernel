/*
** EPITECH PROJECT, 2023
** my
** File description:
** my
*/
#pragma once
#include <stdlib.h>

#define IS_DIGIT(x) ((x) >= '0' && x <= '9')

typedef struct save_byte_s {
    int byte;
    char c;
    char str[40];
} save_byte_t;

typedef struct calc_s {
    char command;
    int args_1;
    int args_2;
} calc_t;

typedef struct put_s {
    char command;
    char str[40];
} put_t;

char **
mstwa(char *str, char const *sep);
int my_strlen(char const *str);
