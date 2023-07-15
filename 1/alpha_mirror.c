/* Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa llamado alpha_mirror que tome una cadena y muestre esta cadena
después de reemplazar cada carácter alfabético por el carácter alfabético opuesto
opuesto, seguido de una nueva línea.

a' se convierte en 'z', 'Z' se convierte en 'A'
d' se convierte en 'w', 'M' se convierte en 'N'

y así sucesivamente.

Las mayúsculas y minúsculas no se modifican.

Si el número de argumentos no es 1, sólo se muestra una nueva línea.

Ejemplos:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$> */

#include <unistd.h>

/* code 
int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            // * Aplicamos formula "(Z - caracter argumento) + A"
            //  * es lo mismo que hacer "(a + z) - caracter argumento"
           
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i] = ('Z' - av[1][i]) + 'A';
            else if (av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] = ('z' - av[1][i]) + 'a';
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
} */

