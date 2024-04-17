/*
** EPITECH PROJECT, 2022
** my
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
    #include <ncurses.h>
    #include <fcntl.h>
    #include <string.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <stddef.h>
    #include <unistd.h>
    #include <dirent.h>
    #include "structure.h"
    int main(int argc, char **argv);
    int my_putstr(char const *str);
    int my_putchar(char c);
    char *create_map(char *argv);
    char **str_to_word_array(char const *str);
    int my_tab(char **str);
    p_t my_up(p_t P);
    p_t my_down(p_t P);
    p_t my_left(p_t P);
    p_t my_right(p_t P);
    p_t find_o(p_t P);
    int my_strcmp(char *s1, char *s2);
    int help_h(char **argv);
    int my_printf(const char *format, ...);
    unsigned int binaire(unsigned int number);
    int decimaltooctal(int number);
    int intohexmax(int number);
    int intohexmin(int number);
    unsigned int nonsign(unsigned int nb);
    int nprintablechar(char const *str);
    int my_put_nbr(int nb);
    int help_h(char **argv);
    int my_putchar(char c);
    p_t help_p(p_t P, int i, int j);

#endif
