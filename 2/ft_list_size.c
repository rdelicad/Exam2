/* Assignment name  : ft_list_size
Expected files   : ft_list_size.c
Allowed functions: 
--------------------------------------------------------------------------------
Escribe una función que devuelva el número de elementos de la lista enlazada que se le
que se le pase.

Debe declararse como sigue:

int	ft_list_size(t_list *begin_list);

You must use the following structure in your program ft_list_size.c :*/

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list; 

#include <stdio.h>
#include <stdlib.h>

/* code
int ft_list_size(t_list *begin_list)
{
    if (begin_list == 0)
        return (0);
    return (1 + ft_list_size(begin_list->next));
}

int main(void)
{
    int n = 0; 

    t_list *a = malloc(sizeof(*a));
    t_list *b = malloc(sizeof(*b));
    t_list *c = malloc(sizeof(*c));

    a->next = b;
    a->data = NULL;

    b->next = c;
    b->data = NULL;

    c->next = NULL;
    c->data = (void *)&n;

    printf("%d\n", ft_list_size(a));
    return (0);
} */


/* code mio 
int	ft_list_size(t_list *begin_list)
{
    int i = 0;

    while (begin_list != NULL)
    {
        begin_list = begin_list->next;
        i++;
    }
    return (i);
}

int main(void)
{
    int aa = 4;
    int bb = 3; 
    int cc = 3; 

    t_list *a = malloc(sizeof(t_list));
    t_list *b = malloc(sizeof(t_list));
    t_list *c = malloc(sizeof(t_list));

    a->data = &aa;
    b->data = &bb;
    c->data = &cc;

    a->next = b;
    b->next = c;
    c->next = NULL;

    int list = ft_list_size(a);

    printf("%d", list);
    return (0);

}
 */

