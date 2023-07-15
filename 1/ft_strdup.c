/* La función strdup() devolverá un puntero a una nueva cadena, que es un duplicado de la cadena   
apuntada por s. El puntero devuelto puede pasarse a free().  Se devuelve un puntero nulo si la nueva   
cadena no puede crearse.
En caso de éxito, la función strdup() devuelve un puntero a una nueva cadena. En caso contrario, devolverá un puntero   
un puntero nulo y errno para indicar el error.
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src); */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* //code 
char *ft_strdup(char *src)
{
    // * hacemos un strlen para calcular longitud cadena
    //  * reservamos memoria + 1 para el NULL
    //  * si falla memoria retornamos NULL
    //  * copiamos caracteres en nueva cadena
    //  * añadimos '\0'
   
    int i = 0;
    char *str;
    while (src[i] != '\0')
        i++;
    str = malloc(sizeof(char) * (i + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (src[i] != '\0')
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
} 

int main(void)
{
    char *str = "hola";
    char *new;
    new = ft_strdup(str);
    printf("%s", new);
    return (0);
} */


/* //code 
char *ft_strdup(char *src)
{
    int i = 0;
    char *new;

    //strlen
    while (src[i] != 0)
        i++;

    //reservamos memoria
    if (!(new = (char *)malloc(sizeof(char) * i)))
        return (NULL);

    //strcpy
    i = 0;
    while (src[i] != '\0')
    {
        new[i] = src[i];
        i++;
    }

    //caracter vacio
    new[i] = '\0';

    return (new);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        printf ("Antes: %s\n", av[1]);
        char *a = ft_strdup(av[1]);
        printf ("Despues: %s", a);
    }
    printf ("\n");
    return (0);
} */

