/* Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b); */

#include <stdio.h>

/* //code
void    ft_swap(int *a, int *b)
{
    int    aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(void)
{
	int i = 1;
	int j = 0;
	printf("i = %d y j = %d\n", i, j);
	ft_swap(&i, &j);
	printf("i = %d y j = %d\n", i, j);
	return (0);
} */

