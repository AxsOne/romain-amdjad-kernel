/*
** EPITECH PROJECT, 2023
** my
** File description:
** my
*/
#pragma once
#include <stdlib.h>
#include <stdio.h>

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

/*typedef struct put_s {
    char command;
    char str[40];
} put_t;*/

/*----------------------------------------------------------------------------*/
typedef struct add_s {
    char command;
    int args_1;
    int args_2;
} add_t;

typedef struct sub_s {
    char command;
    int args_1;
    int args_2;
} sub_t;

typedef struct mul_s {
    char command;
    int args_1;
    int args_2;
} mul_t;

typedef struct put_s {
    char command;
    char *str;
} put_t;


char **mstwa(char *str, char const *sep);
int my_strlen(char const *str);

int bytes_to_dec(char byte1, char byte2, char byte3, char byte4);

//-----------------------------------------------------------------------------
add_t *init_add(void);
    void my_add_fill_struct(FILE *file, add_t *add);

sub_t *init_sub(void);
    void my_sub_fill_struct(FILE *file, sub_t *sub);

mul_t *init_mul(void);
    void my_mul_fill_struct(FILE *file, mul_t *mul);
put_t *init_put(void);
    void my_put_fill_struct(FILE *file, put_t *put);