/*
** EPITECH PROJECT, 2018
** my_list_size.c
** File description:
**
*/

#include "my.h"
#include <stdlib.h>

int my_list_size(linked_list_t const *begin)
{
    int nb_params;

    nb_params = 0;
    while (begin != NULL) {
        begin = begin->next;
        nb_params = nb_params + 1;
    }
    return (nb_params);
}
