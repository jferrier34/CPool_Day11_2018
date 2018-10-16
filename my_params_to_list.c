/*
** EPITECH PROJECT, 2018
** my_params_to_list.c
** File description:
**
*/

#include<stdlib.h>
#include"include/mylist.h"

int my_put_in_list (struct linked_list_t **list, char *data)
{
    linked_list_t *element;

    element = malloc(sizeof(*element));
    element->data=data;
    element->next=*list;
    *list = element;
    return (0);
}


linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list;
    list = NULL;
    int cpt = 0;


    while (cpt < ac) {
        my_put_in_list(&list, av[cpt]);
        cpt++;
    }
    return (list);
}
