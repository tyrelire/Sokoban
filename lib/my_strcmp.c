/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/
#include "../include/my.h"

int my_strcmp(char *s1, char *s2)
{
    int x = 0, y = 0;
    int res = 0;
    for (x, y; s1[x] != '\0' && s2[y] != '\0'; x++, y++) {
        if (s1[x] != s2[y]) {
            res = (s1[x] - s2[y]);
            return res;
        }
    }
}
