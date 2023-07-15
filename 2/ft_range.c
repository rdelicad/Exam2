/* Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Escribe la siguiente función:

int *ft_range(int inicio, int fin);

Debe asignar (con malloc()) un array de enteros, llenarlo con valores consecutivos
consecutivos que empiecen en start y terminen en end (¡Incluyendo start y end!), y luego
devolver un puntero al primer valor del array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3. */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/* code atto
int	*ft_range(int start, int end)
{
	long int i = 0;
	long int s = start;
	long int e = end;
	long int count = s - e;
	if (count < 0)
		count *= -1;
	int *arr = (int *)malloc((count + 1) * sizeof(int));
	if (end < 0)
	{
		while (i <= count)
			arr[i++] = start--;
	}
	else
	{
		while (i<= count)
			arr[i++] = start++;
	}
	return (arr);
} */

//code mio
/* int *ft_range(int start, int end)
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
    //start -> end
    if (s > e)
    {
        while (s >= e)
        {
            tab[i++] = s--;
        }
    }
    else if (s < e)
    {
        while (s <= e)
        {
            tab[i++] = s++;
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
        int *s = ft_range(a, b);
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
}

 */


