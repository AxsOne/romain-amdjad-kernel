 /*
** EPITECH PROJECT, 2022
** mstwa
** File description:
** lol
*/
#include <string.h>
#include "my.h"

char *my_strdup(char const *str);

int sepp(char const *sep, char c)
{
    for (int count = 0; sep[count]; count++)
        if (sep[count] == c)
            return 1;
    return 0;
}

int str_is_sepp(char const *str, char const *sep)
{
    for (int i = 0; str[i]; i++)
        if (!sepp(sep, str[i]))
            return 0;
    return 1;
}

int nb_tab(char *str, char const *sep)
{
    int count_sep = 0;
    int i = 0;
    if (str_is_sepp(str, sep))
        return 0;
    while (str[i] != '\0') {
        for (; sepp(sep, str[i]) && str[i]; i++);
        count_sep = (str[i] == '\0') ? count_sep : count_sep + 1;
        for (; !sepp(sep, str[i]) && str[i]; i++);
        for (; !sepp(sep, str[i]) && str[i]; i++);
    }
    return count_sep;
}

char *change_str(char const *sep, char *str)
{
    int count = 0;
    for (; str[count]; count++)
        if (sepp(sep, str[count]) == 1)
            str[count] = '\0';
    return str;
}

char **mstwa(char *str, char const *sep)
{
    if (!str)
        return NULL;
    int line = 0;
    int size_tab = nb_tab(str, sep);
    char **final = malloc(sizeof(char *) * (size_tab + 1));
    char *copy = change_str(sep, my_strdup(str));
    for (int nb_loop = 0, count = 0; nb_loop < size_tab; nb_loop++, count++) {
        while (copy[count] == '\0' || copy[count] == ' ')
            count++;
        final[line] = my_strdup(copy + count);
        count += my_strlen(final[line]);
        line++;
    }
    free(copy);
    final[line] = NULL;
    return final;
}
