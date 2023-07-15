/* Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que tome dos cadenas y muestre, sin dobles, los
caracteres que aparecen en cualquiera de las cadenas.

La pantalla estará en el orden en que aparecen los caracteres en la línea de comandos, y
irá seguido de un \n.

Si el número de argumentos no es 2, el programa muestra \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$> */

#include <unistd.h>

/* int main(int ac, char **av)
{
    if (ac == 3)
    {
        char ascii[255] = {0};
        int i = 1;

        while (i < 3)
        {
            int j = 0;
            while (av[i][j])
            {
                if (ascii[(int)av[i][j]] == 0)
                {
                    write (1, &av[i][j], 1);
                    ascii[(int)av[i][j]] = 1;
                }
                j++;
            }
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
 

int main(int ac, char **av)
{
    if (ac != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    char freq[256] = {0};
    char *s1 = av[1];
    char *s2 = av[2];
    while (*s1 != '\0')
    {
        if (freq[(unsigned char)*s1] == 0)
        {
            freq[(unsigned char)*s1] = 1;
            write(1, s1, 1);
        }
        s1++;
    }
    while (*s2 != '\0')
    {
        if (freq[(unsigned char)*s2] == 0)
        {
            freq[(unsigned char)*s2] = 1;
            write(1, s2, 1);
        }
        s2++;
    }
    write(1, "\n", 1);
    return (0);
} 

int main(int ac, char **av)
{
    if (ac == 3)
    {
        char ascii[256] = {0};
        while (*++av)
        {
            char *s = *av;
            while (*s)
            {
                if (!ascii[(unsigned char)*s])
                {
                    write(1, s, 1);
                    ascii[(unsigned char)*s] = 1;
                }
                s++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
} 
 
 */

