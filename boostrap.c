/*
** EPITECH PROJECT, 2023
** boostrap
** File description:
** boostrap
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include "my.h"

int read_byte(void) {
    FILE *file = fopen("one-structure.yolo", "r");
    if (file != NULL) {
        fseek(file, 0L, SEEK_END);
        long size = ftell(file);
        printf("Taille du fichier : %ld bytes\n", size);
        fclose(file);
    }
    return 0;
}

int step1(void)
{
    FILE *fp;
    char str[] = "Hello bambino\n";
    fp = fopen("some-text.yolo", "w");
    if (fp == NULL)
        return 84;
    fwrite(str, 1, sizeof(str), fp);
    fclose(fp);
    return 0;
}

int step2(void)
{
    FILE *fp;
    char str[] = "12345678";
    fp = fopen("number-as-text.yolo", "w");
    if (fp == NULL)
        return 84;
    fwrite(str, 1, sizeof(str - 1), fp);
    fclose(fp);
    return 0;
}

void step3(void)
{
    FILE *fp;
    int byte = 12345678;
    fp = fopen("number-as-int.yolo", "w");
    fwrite(&byte, 1, sizeof(int), fp);
    fclose(fp);
}

void step4(void)
{
    FILE *fp;
    int byte = 192837;
    char str[40] = "Corewar is swag!!";
    char c = 'k';
    fp = fopen("several-variables.yolo", "wa");
    fwrite(&byte, 1, sizeof(int), fp);
    fwrite(&c, 1, sizeof(char), fp);
    fwrite(str, 1, sizeof(str), fp);
    fclose(fp);
}

void step5(void)
{
    save_byte_t *byte = malloc(sizeof(save_byte_t));
    FILE *fp;
    byte->byte = 192837;
    byte->c = 'k';
    strcpy(byte->str, "Corewar is swag!!");
    fp = fopen("one-structure.yolo", "wa");
    fwrite(byte, 1, (sizeof(byte->byte) + sizeof(byte->c) + sizeof(byte->str)), fp);
    fclose(fp);
}

int adds(int a, int b)
{
    return a + b;
}

int substracts(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

char *get_file(char *str)
{   
    calc_t *calc = malloc(sizeof(calc_t));
    FILE *file = fopen(str, "r");
    FILE *file2 = fopen("recup", "wb");
    size_t len = 0;
    char **line = NULL;
    //int a = atoi(line[1]);
    //int b = atoi(line[2]);
    for (int i = 0; getline(&str, &len, file) != -1; i++) {
        line = mstwa(str, " ");
        if (strcmp(line[0], "add") == 0) {
            calc->command = 1;
            calc->args_1 = atoi(line[1]);
            calc->args_2 = atoi(line[2]);
            fwrite(calc, 1, (sizeof(calc->command) + sizeof(calc->args_1) + sizeof(calc->args_2)), file2);
        }
        if (strcmp(line[0], "sub") == 0) {
            calc->command = 2;
            calc->args_1 = atoi(line[1]);
            calc->args_2 = atoi(line[2]);
            fwrite(calc, 1, (sizeof(calc->args_1) + sizeof(calc->args_2) + sizeof(calc->command)), file2);
        }
        if (strcmp(line[0], "mul") == 0) {
            calc->command = 3;
            calc->args_1 = atoi(line[1]);
            calc->args_2 = atoi(line[2]);
            fwrite(calc, 1, (sizeof(calc->args_1) + sizeof(calc->args_2) + sizeof(calc->command)), file2);
        }
        if (strcmp(line[0], "put") == 0) {
            calc->command = 4;
            strcpy(calc->str_2, line[1]);
            fwrite(calc, 1, (sizeof(calc->command) + sizeof(calc->str_2)), file2);
        }
    }
    return str;
}

void create_file(char *str, char *str_2)
{
    str = get_file(str_2);
    FILE *file = fopen(str, "wr");
    fclose(file);
    
}

int main(int ac, char **av)
{
    ac = ac;
    if (open(av[1], O_RDONLY) == -1)
        return 84;
    //step1();
    //step2();
    //step3();
    //step4();
    //step5();
    read_byte();
    get_file(av[1]);
    //create_file(av[1], av[2]);
    return 0;
}