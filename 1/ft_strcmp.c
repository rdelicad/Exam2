/* Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2); */

#include <stdio.h>
#include <string.h>

/* // code 
int ft_strcmp(char *s1, char *s2)
{
    //  que recorra los dos string mientras cada caracter sea igual
    //  retornamos la resta de s1 - s2 en cuanto sean diferentes algunos
   
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
} 

int main(void)
{
    int result;
    char *s1 = "holaa";
    char *s2 = "hola";
    result = ft_strcmp(s1, s2);
    printf("%i", result);
    return (0);
} */

/* code mio 
int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1++ == *s2++)
        ;
    return (*s1 - *s2);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int a = ft_strcmp(av[1], av[2]);
        printf("%d", a);
    }
    printf("\n");
    return (0);
} */

