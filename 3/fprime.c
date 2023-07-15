/* Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Escribe un programa que tome un int positivo y muestre sus factores primos en la salida
salida estándar, seguido de una nueva línea.

Los factores deben mostrarse en orden ascendente y separados por '*', de modo que
la expresión en la salida dé el resultado correcto.

Si el número de parámetros no es 1, simplemente muestra una nueva línea.

La entrada, cuando la haya, será válida.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$ */

#include <stdio.h>
#include <stdlib.h>

/* //code
void ft_prime(int n)
{
    //225225
    int i = 2;
    if (n == 1)
        printf("1");
    if (n == 0)
        printf("0");
    while (i <= n)
    {
        while (n % i == 0)
        {
            printf("%d", i);     
            n /= i;
            if (i <= n)
                printf("*");
        }
        i++;
        
    }
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        printf("\n");
        return (0);
    }

    int n = atoi(av[1]);
    ft_prime(n);
} */

/* // code mio
int main(int ac, char **av)
{
    if (ac == 2)
    {
        int factor = 2;
        int n = atoi(av[1]);

        if (n == 1)
            printf("1");
        if (n == 0)
            printf("0");
        while (factor <= n)
        {
            while (n % factor == 0)
            {
                printf("%d", factor);
                n = n / factor;
                if (factor <= n)
                    printf("*");
            }
            factor++;
        }
    }
    printf("\n");
    return (0);
} */

