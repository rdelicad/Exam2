/* Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Escribe un programa que tome dos cadenas que representen dos enteros estrictamente positivos
que quepan en un int.

Muestra su máximo común denominador seguido de una nueva línea (Siempre es un
entero estrictamente positivo).

Si el número de parámetros no es 2, muestra una nueva línea.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e 
1$
$> ./pgcd | cat -e
$ */

#include <stdio.h>
#include <stdlib.h>

/* int main(int ac, char **av)
{
    if (ac == 3)
    {
        unsigned int a = atoi(av[1]);
        unsigned int b = atoi(av[2]);
        unsigned int res;

        res = a;
        while (res > 0)
        {
            if (a % res == 0 && b % res == 0)
            {
                printf ("%d", res);
                return 0;
            }
            res--;
        }
    }
    printf ("\n");
    return (0);
} */

/* code mio 
int main(int ac, char **av)
{
    if (ac == 3)
    {
        int a = atoi(av[1]);
        int b = atoi(av[2]);
        int res = a;
        if (a == 0 || b == 0)
        {
            printf ("0");
            return (0);
        }
        if (res < b)
            res = a;
        while (res > 0)
        {
            if (a % res == 0 && b % res == 0)
                break ;
            res--;
        }
        printf ("%d", res);
    }
    printf ("\n");
    return (0);
} */

