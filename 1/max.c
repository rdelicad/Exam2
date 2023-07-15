/* Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Escribe la siguiente función:

int max(int* tab, unsigned int len);

El primer parámetro es un array de int, el segundo es el número de elementos en
la matriz.

La función devuelve el mayor número encontrado en el array.

Si el array está vacío, la función devuelve 0. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* int max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    // verificacion por si el array esta vacio
    if (len == 0)
        return (0);
    // variable que recoge el valor max encontrado, lo inicializamos al primer elemento
    int res = tab[0];
    // recorremos cada elemento
    while (i < len)
    {
        // si el valor actual es mas pequeño que el encontrado, lo actualizamos
        if (res < tab[i])
            res = tab[i];
    }
    return (res);
} 

int main() 
{
    // array de enteros
    int arreglo[] = {5, 8, 3, 2, 9, 6};
    // calcular tamaño del array
    unsigned int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    int maximo = max(arreglo, tamano);

    printf("El número más grande es: %d\n", maximo);

    return 0;
} */

