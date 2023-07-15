/* Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2); */

#include <stdio.h>
#include <stdlib.h>

/* code
char    *ft_strcpy(char *s1, char *s2)
{
    int i;
    i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';

    return (s1);
}

int main(void)
{
    char s1[100];
    char *s2 = "adios";
    char *resul;
    resul = ft_strcpy(s1, s2);
    printf("%s", resul);
    return (0);
}

/* int main(int argc, char **argv)
{
    if (argc > 1)
    {

        char *str = malloc(sizeof(char) * 100);
        printf("ft_strcpy(\"%s\", str) = %s\n", argv[1], ft_strcpy(str, argv[1]));
        free(str);
    }
    return(0);
} */ 



