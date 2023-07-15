/* Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions: 
--------------------------------------------------------------------------------

Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

Esta función debe ordenar la lista dada como parámetro, utilizando la función 
cmp para seleccionar el orden a aplicar, y devuelve un puntero al 
primer elemento de la lista ordenada.

Los duplicados deben permanecer.

Las entradas serán siempre coherentes.

Debe utilizar el tipo t_list descrito en el archivo list.h 
que se le proporciona. Debe incluir ese fichero 
(#include "list.h"), pero no debe entregarlo. Utilizaremos nuestro propio 
para compilar su tarea.

Las funciones pasadas como cmp siempre devolverán un valor distinto de 
0 si a y b están en el orden correcto, 0 en caso contrario.

Por ejemplo, la siguiente función usada como cmp ordenará la lista 
en orden ascendente:
*/
#include <stdlib.h>
#include "sort_list.h"
#include <stdio.h>

int ascending(int a, int b)
{
	return (a <= b);
}


/* //code
t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    int swap;
    t_list *tmp;

    tmp = lst;
    while (lst->next != NULL)
    {
        if (((*cmp)(lst->data, lst->next->data)) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = tmp;
        }
        else   
            lst = lst->next;
    }
    lst = tmp;
    return (lst);
}

int ascending(int a, int b)
{
	return (a <= b);
}

int	main(void)
{
	t_list *c = malloc(sizeof(t_list));
	c->next = 0;
	c->data = 45;

	t_list *b = malloc(sizeof(t_list));
	b->next = c;
	b->data = 73;

	t_list *a = malloc(sizeof(t_list));
	a->next = b;
	a->data = 108;

	t_list *cur = a;
	while (cur)
	{
		printf("%d", cur->data);
		if (cur->next != 0)
			printf(", ");
		cur = cur->next;
	}
	printf("\n");

	cur = sort_list(a, ascending);

	// cur = a;
	while (cur)
	{
		printf("%d", cur->data);
		if (cur->next != 0)
			printf(", ");
		cur = cur->next;
	}
	printf("\n");
} */

/* code mio 
int ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swap;
	t_list *tmp = lst; //se guarda una copia de la posicion inicial
	

	
	while (lst->next != NULL) //recorrer la lista
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp; //volvemos lst a la posicion incial de la lista
	return (lst);

}

int main(void)
{

	int aa = 4;
	int bb = 3;
	int cc = 1;
	int dd = 3;

	t_list *a = malloc(sizeof(t_list));
	t_list *b = malloc(sizeof(t_list));
	t_list *c = malloc(sizeof(t_list));
	t_list *d = malloc(sizeof(t_list));

	a->data = aa;
	b->data = bb;
	c->data = cc;
	d->data = dd;

	a->next = b;
	b->next = c;
	c->next = d;
	d->next = NULL;

	t_list *list = sort_list(a, ascending);

	//Imprime los elementos de la lista ordenada

	while (list != NULL)
	{
		printf("%d", list->data);
		list = list->next;
	}
	printf("\n");

	// liberar memoria de los nodos
	free(a);
	free(b);
	free(c);
	free(d);

	return (0);
}
 */

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	
}

int main(void)
{

	int aa = 4;
	int bb = 3;
	int cc = 1;
	int dd = 3;

	t_list *a = malloc(sizeof(t_list));
	t_list *b = malloc(sizeof(t_list));
	t_list *c = malloc(sizeof(t_list));
	t_list *d = malloc(sizeof(t_list));

	a->data = aa;
	b->data = bb;
	c->data = cc;
	d->data = dd;

	a->next = b;
	b->next = c;
	c->next = d;
	d->next = NULL;

	t_list *list = sort_list(a, ascending);

	//Imprime los elementos de la lista ordenada

	while (list != NULL)
	{
		printf("%d", list->data);
		list = list->next;
	}
	printf("\n");

	// liberar memoria de los nodos
	free(a);
	free(b);
	free(c);
	free(d);

	return (0);
}
