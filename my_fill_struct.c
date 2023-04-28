/*
** EPITECH PROJECT, 2023
** boostrap
** File description:
** boostrap
*/
#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

void my_add_fill_struct(FILE *file, add_t *add)
{
    char tmp[4];
    fread(tmp, 4, 1, file);
    add->args_1 = bytes_to_dec(tmp[0], tmp[1], tmp[2], tmp[3]);
    fread(tmp, 4, 1, file);
    add->args_2 = bytes_to_dec(tmp[0], tmp[1], tmp[2], tmp[3]);
}

void my_sub_fill_struct(FILE *file, sub_t *sub)
{
    char tmp[4];
    fread(tmp, 4, 1, file);
    sub->args_1 = bytes_to_dec(tmp[0], tmp[1], tmp[2], tmp[3]);
    fread(tmp, 4, 1, file);
    sub->args_2 = bytes_to_dec(tmp[0], tmp[1], tmp[2], tmp[3]);
}

void my_mul_fill_struct(FILE *file, mul_t *mul)
{
    char tmp[4];
    fread(tmp, 4, 1, file);
    mul->args_1 = bytes_to_dec(tmp[0], tmp[1], tmp[2], tmp[3]);
    fread(tmp, 4, 1, file);
    mul->args_2 = bytes_to_dec(tmp[0], tmp[1], tmp[2], tmp[3]);
}

void my_put_fill_struct(FILE *file, put_t *put)
{
    char tmp[4];
    int len = 0;
    fread(&tmp, 4, 1, file);
    len = bytes_to_dec(tmp[0], tmp[1], tmp[2], tmp[3]);
    put->str = malloc(sizeof(char) * len);
    for (int i = 0; i < len; i++) {
        fread(&tmp, sizeof(char), 1, file);
        put->str[i] = tmp[0];
    }
    put->str[len] = '\0';
}
