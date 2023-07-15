/* Nombre de la tarea : ft_list_remove_if
Ficheros esperados : ft_list_remove_if.c
Funciones permitidas : free
--------------------------------------------------------------------------------

Escribe una función llamada ft_list_remove_if que elimine de la lista
 pasada cualquier elemento cuyos datos sean "iguales" a los datos de referencia.

Se declarará como sigue :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp toma dos void* y devuelve 0 cuando ambos parámetros son iguales.

Tienes que usar el fichero ft_list.h, que contendrá: */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

/* // code original
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return;

	t_list *cur = *begin_list; 

    
	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next; 
		free(cur); 
		ft_list_remove_if(begin_list, data_ref, cmp); 
	}
	cur = *begin_list; 
	ft_list_remove_if(&cur->next, data_ref, cmp);
} */

/* void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	// Verifica si la lista está vacía o si el puntero al inicio de la lista es nulo
	if (begin_list == NULL || *begin_list == NULL)
		return;
 	// Crea un puntero cur (current) y lo inicializa con el inicio de la lista
	t_list *cur = *begin_list;
 	// Comprueba si el dato actual es igual al dato de referencia utilizando la función de comparación
	if (cmp(cur->data, data_ref) == 0)
	{
		// Actualiza el inicio de la lista para que apunte al siguiente nodo
		*begin_list = cur->next;
		// Libera la memoria ocupada por el nodo actual
		free(cur);
		// Llama recursivamente a la función para seguir eliminando nodos iguales al dato de referencia
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
 	// Actualiza el puntero cur para que apunte al inicio de la lista actualizada
	cur = *begin_list;
	// Llama recursivamente a la función para seguir eliminando nodos iguales al dato de referencia en el resto de la lista
	ft_list_remove_if(&cur->next, data_ref, cmp);
} */



int cmp(void *data1, void *data2)
{
    // Supongamos que estamos trabajando con enteros
    int *num1 = (int *)data1;
    int *num2 = (int *)data2;

    if (*num1 == *num2)
        return 0;
    else
        return 1;
}

int main(void)
{
    // Creamos una lista de ejemplo
    t_list *list = NULL;
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    int data1 = 10;
    int data2 = 20;
    int data3 = 10;

    node1->data = &data1;
    node1->next = node2;
    node2->data = &data2;
    node2->next = node3;
    node3->data = &data3;
    node3->next = NULL;

    list = node1;

    // Imprimimos la lista original
    t_list *current = list;
    printf("Lista original: ");
    while (current != NULL)
    {
        int *data = (int *)current->data;
        printf("%d ", *data);
        current = current->next;
    }
    printf("\n");

    // Llamamos a la función ft_list_remove_if para eliminar los elementos iguales a data3
    int data_ref = 10;
    ft_list_remove_if(&list, &data_ref, cmp);

    // Imprimimos la lista después de eliminar los elementos
    current = list;
    printf("Lista después de eliminar los elementos iguales a %d: ", data_ref);
    while (current != NULL)
    {
        int *data = (int *)current->data;
        printf("%d ", *data);
        current = current->next;
    }
    printf("\n");

    return 0;
}