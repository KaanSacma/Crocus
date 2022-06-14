/*
** EPITECH PROJECT, 2022
** file
** File description:
** char nb
*/

#include <stdio.h>
#include <string.h>
#include "my.h"

int get_char(char *str, int nb)
{
    int i = 0;

    for (i = 0; nb > 0; i += 1, nb -= 1) {
        if (str[i + 1] == '\0')
            i = -1;
    }
    return i;
}

void print_line_nb(int nb, char *str, char *list)
{
    void (*fct[])(int i, char c) = {print_zero, print_one, print_two,
                                    print_three, print_four, print_five,
                                    print_six, print_seven, print_eight,
                                    print_nine};
    int l = 0;
    int j = 0;

    for (int x = 0; list[x] != '\0'; x += 1) {
        l = list[x] - '0';
        j = get_char(str, l);
        fct[l](nb, str[j]);
        if (list[x + 1] != '\0')
            printf(" ");
    }
}

void display_nb_char(char *str, char *list)
{
    int nb = 0;

    while (nb < 5) {
        print_line_nb(nb, str, list);
        printf("\n");
        nb += 1;
    }
}

void print_char_nb(int ac, char **av)
{
    int idx_s = 0;
    int idx_n = 0;

    for (int i = 1; i < ac; i += 1) {
        if (strcmp(av[i], "-s") == 0)
            idx_s = i;
        if (strcmp(av[i], "-n") == 0)
            idx_n = i;
    }
    display_nb_char(av[idx_s + 1], av[idx_n + 1]);
}
