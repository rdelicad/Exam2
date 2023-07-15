/* Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Escribe una función que determine si un número dado es una potencia de 2.

Esta función devuelve 1 si el número dado es una potencia de 2, en caso contrario devuelve 0.

Su función debe declararse como sigue:

int	    is_power_of_2(unsigned int n); */

#include <stdio.h>
#include <stdlib.h>

/* //code 
int is_power_of_2(unsigned int n)
{
    if (n <= 0 || n == 1)
        return (0);
    while (n > 1)
    {
        if (n % 2 == 0)
            n = n / 2;
        else
            return 0;
    }
    return 1;
    return (n != 0 && (n & (n - 1)) == 0);
}

int main(void)
{
    int n = -2;
    unsigned int j = (unsigned int)n;
    printf("%u\n", j);
    printf("%i", is_power_of_2(j));
    return (0);
} 
 */

