/* Nombre de la tarea : sort_int_tab
Ficheros esperados : sort_int_tab.c
Funciones permitidas:
--------------------------------------------------------------------------------

Escriba la siguiente función:

void sort_int_tab(int *tab, unsigned int size);

Debe ordenar (in-place) el array int 'tab', que contiene exactamente 'size'
en orden ascendente.

Los dobles deben preservarse.

La entrada es siempre coherente. */

#include <stdio.h>
#include <stdlib.h>

/* //code
void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    while (i < (size - 1))
    {
        unsigned int j = 0;
        while (j < size - i - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                int aux = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = aux;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    int arry[] = {3, 5, 1, 7, 8, 3};
    int tam = sizeof(arry) / sizeof(arry[0]);
    
    int i = 0;
    // while (i < tam)
    //     printf(" %d", arry[i++]);
    
    sort_int_tab(arry, tam);

    printf("\nArray ordenado\n");

    i = 0;
    while (i < tam)
        printf(" %d", arry[i++]);

    return (0);
} 

 */

/* code mio 
void sort_int_tab(int *tab, unsigned int size);
void swap(int *n, int *n1);


int main(void)
{
    int tab[100];
    printf("\n------------\nBefore\n-----------\n");
    for (int i = 0; i < 100; i++)
    {
        tab[i] = rand()%(101-50);
        printf("%d ", tab[i]);
    }
    unsigned int size = 100;
    sort_int_tab(tab, size);

    printf("\n-----------\nAfter\n------------\n");
    for (int i = 0; i < 100; i++)
        printf("%d ", tab[i]);
    printf ("\n\n\n");
    
    return (0);
}

void swap (int *n, int *n1)
{
    *n ^= *n1;
    *n1 ^= *n;
    *n ^= *n1;
}

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int j;
    for (unsigned int i = 0; i < size - 1; i++)
    {
        j = 0;
        while (j < size - 1 - i)
        {
            if (tab[j] > tab[j + 1])
                swap(&tab[j], &tab[j + 1]);
            j++;
        }
    }
} */

void sort_int_tab(int *tab, unsigned int size)
{
   
}

int main(void)
{
    int arry[] = {3, 5, 1, 7, 8, 3};
    int tam = sizeof(arry) / sizeof(arry[0]);
    
    int i = 0;
    
    sort_int_tab(arry, tam);

    printf("\nArray ordenado\n");

    i = 0;
    while (i < tam)
        printf(" %d", arry[i++]);

    return (0);
} 