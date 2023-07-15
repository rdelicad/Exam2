/* Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Escriba un programa que tome una cadena, y muestre la cadena al revés
seguida de una nueva línea.

Si el número de parámetros no es 1, el programa muestra una nueva línea.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$ */

#include <unistd.h>

/* code
int	main(int ac, char **av)
{
    // * Hacemos dos while, en uno incrementamos 'i' hasta llegar a null
    //  * le restamos 1 para posicionarnos en el ultimo caractarer antes de null
    //  * Otro while para imprimir desde el ultimo caracter, disminuyendo 'i'
   
    char *str;

    str = av[1];
	if (ac == 2)
	{
		while(*str)
			str++;
        str--;
		while (*str)
		{
			write(1, &*str, 1);
			str--;
		}
	}
	write(1, "\n", 1);
}
 */

/* code 
int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i] != '\0')
			i++;
		while (i >= 0)
		{
			write(1, &av[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
} */

