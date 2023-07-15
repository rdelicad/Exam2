/* Assignment name  : lcm
Expected files   : lcm.c
Allowed functions:
--------------------------------------------------------------------------------

Escribe una función que tome dos unsigned int como parámetros y devuelva el 
LCM calculado de esos parámetros.

LCM (Mínimo Común Múltiplo) de dos números enteros distintos de cero es el menor número entero positivo divisible por ambos números enteros.
entero divisible por ambos enteros.

Un LCM se puede calcular de dos maneras:

- Se puede calcular cada múltiplo de cada entero hasta obtener un común
común distinto de 0

- Se puede utilizar el HCF (Highest Common Factor) de estos dos enteros y 
calcular como sigue:

	LCM(x, y) = | x * y | / HCF(x, y)
  
  | x * y | significa "Valor absoluto del producto de x por y".

Si al menos un entero es nulo, LCM es igual a 0.

Su función debe tener el siguiente prototipo:

  unsigned int    lcm(unsigned int a, unsigned int b); */


#include <stdio.h>
#include <stdlib.h>

/* //lcm
unsigned int    lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return (0);
    unsigned int res = 0;
    if (a > b)
        res = a;
    else
        res = b;
    while(1)
    {
        if (res % a == 0 && res % b == 0)
           return (res);
        res++;
    }
}

int main(int ac, char **av)
{
    if (ac != 3)
    {
        printf("\n");
        return (0);
    }
    unsigned int n1 = atoi(av[1]);
    unsigned int n2 = atoi(av[2]);
    printf ("%i", lcm(n1, n2));
    return (0);
} */


/* code mio 
unsigned int    lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return (0);
    unsigned res = a;
    if (a < b)
        res = b;
    while (1)
    {
        if (res % a == 0 && res % b == 0)
        {
            return (res);
        }
        res++;
    }
}

int main(int ac, char **av)
{
    if (ac != 3)
    {
        printf ("\n");
        return (0);
    }
    unsigned int a = atoi(av[1]);
    unsigned int b = atoi(av[2]);
    unsigned int res = lcm(a, b);
    printf ("%d", res);
} */

