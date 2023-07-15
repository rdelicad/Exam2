/* Assignment name  : ft_list_foreach
Expected files   : ft_list_foreach.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Escriba una función que tome una lista y un puntero de función, y aplique esta
a cada elemento de la lista.

Debe declararse como sigue:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

La función apuntada por f se utilizará del siguiente modo:

(*f)(list_ptr->data);

Debe utilizar la siguiente estructura, y entregarla como un archivo llamado
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list; */

#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

/* //code
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr;

    list_ptr = begin_list;
    while (list_ptr)
    {
        (*f)(list_ptr->data);
        list_ptr = list_ptr->next;
    }
}

void print_data(void *data)
{
    printf("%d\n", *(int *)data);
}

int main(void)
{
    t_list *list;
    int data1 = 1;
    int data2 = 2;
    int data3 = 3;

    list = malloc(sizeof(t_list));

    list->data = &data1;
    list->next = malloc(sizeof(t_list));

    list->next->data = &data2;
    list->next->next = malloc(sizeof(t_list));

    list->next->next->data = &data3;
    list->next->next->next = NULL;

    ft_list_foreach(list, &print_data);

    return (0);
}

 */

/* //code mio
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr = begin_list;
    while (list_ptr)
    {
        if (list_ptr) //si el list no es NULL
            (*f)(list_ptr->data);
        list_ptr = list_ptr->next; //avanza al siguiente nodo
    }
    
}

void print_data(void *data)
{
    printf("%d\n", *(int *)data);
}

int main(void)
{
    // t_list *list;
    // int data1 = 1;
    // int data2 = 2;
    // int data3 = 3;

    // list = malloc(sizeof(t_list));

    // list->data = &data1;
    // list->next = malloc(sizeof(t_list));

    // list->next->data = &data2;
    // list->next->next = malloc(sizeof(t_list));

    // list->next->next->data = &data3;
    // list->next->next->next = NULL;

    int data1 = 5;
    int data2 = 2;
    int data3 = 3;
    
    t_list *a = malloc(sizeof(t_list));
    t_list *b = malloc(sizeof(t_list));
    t_list *c = malloc(sizeof(t_list));

    a->data = &data1;
    b->data = &data2;
    c->data = &data3;

    a->next = b;
    b->next = c;
    c->next = NULL;

    t_list *list = a;

    ft_list_foreach(list, &print_data);

    return (0);
} */

/* void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr = begin_list;
    while (list_ptr != NULL)
    {
        //if (list_ptr)
        (*f)(list_ptr->data);
        list_ptr = list_ptr->next;
    }
} */


void print_data(void *data)
{
    printf("%d\n", *(int *)data);
}

int main(void)
{
    int data1 = 5;
    int data2 = 2;
    int data3 = 3;
    
    t_list *a = malloc(sizeof(t_list));
    t_list *b = malloc(sizeof(t_list));
    t_list *c = malloc(sizeof(t_list));

    a->data = &data1;
    b->data = &data2;
    c->data = &data3;

    a->next = b;
    b->next = c;
    c->next = NULL;

    t_list *list = a;

    ft_list_foreach(list, &print_data);

    return (0);
}
