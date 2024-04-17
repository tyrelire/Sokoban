/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/
#include "../include/my.h"

int help_h(char **argv)
{
    if (argv[1][1] == 'h') {
        my_printf("USAGE\n");
        my_printf("     ./my_sokoban map\n");
        my_printf("DESCRIPTION\n");
        my_printf("     map file representing the ");
        my_printf("warehouse map, containing ‘#’ for walls,\n");
        my_printf("         ‘P’ for the player, ‘X’ ");
        my_printf("for boxes and ‘O’ for storage locations.\n");
    }
    return 0;
}
