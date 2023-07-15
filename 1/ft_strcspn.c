/* Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

La función strcspn() calculará la longitud (en bytes) del segmento inicial máximo de la cadena apuntada por s1 que conste enteramente de    
bytes no procedentes de la cadena apuntada por s2.

VALOR DE RETORNO
La función strcspn() devuelve la longitud del segmento calculado de la cadena apuntada por s1; no se reserva ningún valor de retorno para indicar un error.    

reject = rechazar
si tenemos s1 = Hello Worl y s2 = Wo, de entre los dos caracteres de s2, buscara cual aparece primero en s1 y dira su posicion en bytes
en este caso aparecere primero la "o" de "hello", por lo tanto retorna 4 bytes

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject); */

#include <stdio.h>
#include <string.h>

/* code
size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j = 0;
    //   bucle hasta que termine s1
    //   bucle anidado hasta que termine reject
    //   un filtro para comparar los dos caracteres si son iguales
    //   si son iguales devuelve la longitud
    //   si no, suma j++ para seguir iterando por reject
    //   cuando llegue al final, se resetea contador (j = 0)
    //   y sumamos otra posicion a s1 para comparar de nuevo
   
    while (s[i] != '\0')
    {
        while (reject[j] != '\0')
        {
            if (reject[j] == s[i])
                return (i);
            j++;
        }
        j = 0;
        i++;
    }
    return (i);
}

int main() 
{
    const char* str = "Hello, World!";
    const char* charsToExclude = "Wo";
    size_t length = ft_strcspn(str, charsToExclude);
    size_t length1 = strcspn(str, charsToExclude);

    printf("Longitud del segmento inicial sin caracteres de exclusión: %zu\n", length);
    printf("Longitud del segmento inicial: %zu\n", length1);

    return 0;
} */

/* //code mio 
size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j = 0;

    while (s[i] != '\0')
    {
        while (reject[j] != '\0')
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        j = 0;
        i++;
    }
    return (i);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int a = ft_strcspn(av[1], av[2]);
        printf("%d", a);
    }
    printf("\n");
    return (0);
} */

