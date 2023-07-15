/* Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

Debe asignar (con malloc()) un array de enteros, llenarlo con valores consecutivos
consecutivos que comiencen en end y terminen en start (¡Incluyendo start y end!), luego
devolver un puntero al primer valor del array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0. */

#include <stdlib.h>
#include <stdio.h>

/* //code
int *ft_rrange(int start, int end)
{
    long start_l = start;
    long end_l = end;
    long size = labs(start_l - end_l) + 1;
    if (size < 0)
        size = -size;
    int *arr = (int *)malloc(size * sizeof(int));
    if (!arr)
        return (NULL);

    int i = 0;
    if (end_l > start_l)
    {
        while (end_l >= start_l)
        {
            arr[i] = (int)end_l;
            end_l--;
            i++;
        }
    }
    else  
    {
        while (end_l <= start_l)
        {
            arr[i] = (int)end_l;
            end_l++;
            i++;
        }
    }
    return (arr);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        long start_l = atoi(av[1]);
        long end_l = atoi(av[2]);
        long size = labs(start_l - end_l) + 1;
        if (size < 0)
            size = -size;

        int *arr = ft_rrange(atoi(av[1]), atoi(av[2]));

        int i = 0;
        while (i < size)
        {
            printf("%d ", arr[i]);
            i++;
        }
        free(arr);
        return (0);
    }
} */

/* code mio
int *ft_rrange(int start, int end)
{
    long i = 0;
    long s = start;
    long e = end;
    long len = s - e;
    if (len < 0)
        len *= -len;
    int *tab = (int *)malloc(sizeof(int) * (len + 1));
    if (!tab)
        return (NULL);
    //end ---> start
    if (s > e)
    {
        while (s >= e)
        {
            tab[i++] = e++;
        }
    }
    else if (s < e)
    {
        while (s <= e)
        {
            tab[i++] = e--;
        }
    }
    return (tab);
}


int main(int ac, char **av)
{
    if (ac == 3)
    {
        long a = atol(av[1]);
        long b = atol(av[2]);
        int *s = ft_rrange(a, b);
        long len;
        if (a > b)
            len = a - b + 1;
        else
            len = b - a + 1;
        
        for (long i = 0; i < len; i++)
            printf("%d ", s[i]); 
    }
    printf("\n");
    return (0);
} */


