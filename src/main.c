/*
** EPITECH PROJECT, 2022
** main
** File description:
** file
*/

#include <string.h>
#include <stdio.h>
#include "my.h"

void help_msg(void)
{
    printf("USAGE\n");
    printf("\t./crocus -n \"nb\" -s \"string\"\n\n");
    printf("DESCRIPTION\n");
    printf("\tnb:     Numbers that you want to print\n");
    printf("\tstring: Print the character position by nb given\n");
}

void print_nb(int nb, char *list)
{
    void (*fct[])(int i, char c) = {print_zero, print_one, print_two,
                                    print_three, print_four, print_five,
                                    print_six, print_seven, print_eight,
                                    print_nine};
    int l = 0;

    for (int x = 0; list[x] != '\0'; x += 1) {
        l = list[x] - '0';
        fct[l](nb, '0');
        if (list[x + 1] != '\0')
            printf(" ");
    }
}

void find_nb(char *list)
{
    int nb = 0;

    while (nb < 5) {
        print_nb(nb, list);
        printf("\n");
        nb += 1;
    }
}

int count_arg(int ac, char **av)
{
    int nb = 0;

    for (int i = 1; i < ac; i += 1) {
        if (strcmp(av[i], "-n") == 0) {
            nb += 1;
        }
        if (strcmp(av[i], "-s") == 0) {
            nb += 1;
        }
    }
    return nb;
}

int only_arg(int nb_arg, char **av, int ac)
{
    if (nb_arg == 1 && strcmp(av[1], "-s") == 0)
        return 84;
    else if (nb_arg == 1)
        find_nb(av[2]);
    else
        print_char_nb(ac, av);
    return 0;
}

int main(int ac, char **av)
{
    int error = 0;
    int nb_arg = 0;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        help_msg();
        return 0;
    }
    if ((ac - 1) % 2 != 0)
        return 84;
    nb_arg = count_arg(ac, av);
    if (nb_arg == 0 || check_arg_nb(ac, av) == 84)
        return 84;
    error = only_arg(nb_arg, av, ac);
    if (error == 84)
        return 84;
    return 0;
}
