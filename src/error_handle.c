/*
** EPITECH PROJECT, 2022
** file
** File description:
** handle
*/

#include <string.h>
#include <stdlib.h>

int check_nb(char *str)
{
    int nb = 0;

    if (str[0] < '0' || str[0] > '9')
        return 84;
    nb = atoi(str);
    if (nb < 0)
        return 84;
    return 0;
}

int check_arg_nb(int ac, char **av)
{
    int nb = 0;
    int error = 0;

    for (int i = 1; i < ac; i += 1) {
        if (strcmp(av[i], "-n") == 0) {
            error = check_nb(av[i + 1]);
            nb += 1;
        }
    }
    if (nb == 2)
        return 84;
    return error;
}
