/* Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena y la muestre con exactamente tres espacios
entre cada palabra, sin espacios ni tabuladores ni al principio ni al final,
seguido de una nueva línea.

Una palabra es una sección de la cadena delimitada por espacios/tablillas, o por el inicio/final de la cadena.
inicio/fin de la cadena.

Si el número de parámetros no es 1, o si no hay palabras, simplemente se muestra
una nueva línea.

Examples:

$> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$
$> ./expand_str " seulement          la c'est      plus dur " | cat -e
seulement   la   c'est   plus   dur$
$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./expand_str "" | cat -e
$
$> */

#include <unistd.h>

//" seulement          la c'est      plus dur "
/* code mio 
int main(int ac, char **av)
{
    if (ac == 2)
    {
        int flag = 0;
        int i = 0;
        char *str = av[1];

        while (str[i] == ' ' || str[i] == '\t')
            i++;
        while (str[i])
        {
            if (str[i] == ' ' || str[i] == '\t')
                flag = 1;
            if (!(str[i] == ' ' || str[i] == '\t'))
            {
                if (flag == 1)
                    write (1, "   ", 3);
                flag = 0;
                write (1, &str[i], 1);
            }
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
} */

/* code mio 
int main(int ac, char **av)
{
    if (ac == 2)
    {
        char *s = av[1];
        int flag = 0;

        while (*s <= 32)
            s++;
        while (*s)
        {
            if (*s <= 32)
                flag = 1;
            if (*s && !(*s <= 32))
            {
                if (flag)
                    write(1, "   ", 3);
                flag = 0;
                write(1, &*s, 1);
            }
            s++;
        }
    }
    write(1, "\n", 1);
    return (0);
} */


