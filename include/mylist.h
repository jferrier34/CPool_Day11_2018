/*
** EPITECH PROJECT, 2018
** mylist.h
** File description:
** 
*/

#ifndef MYLIST_H_
        #define MYLIST_H_

typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t;

#endif 
