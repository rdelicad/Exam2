/* Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa llamado hidenp que tome dos cadenas y muestre 1
seguido de una nueva línea si la primera cadena está oculta en la segunda,
en caso contrario muestra 0 seguido de una nueva línea.

Sean s1 y s2 cadenas. Decimos que s1 está oculta en s2 si es posible
encontrar cada carácter de s1 en s2, en el mismo orden en que aparecen en s1.
Además, la cadena vacía está oculta en cualquier cadena.

Si el número de parámetros no es 2, el programa muestra una nueva línea.

Examples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$> */

#include <unistd.h>

/* //"fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6"
int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;
		char *si = av[1];
		char *sj = av[2];

		while (si[i] && sj[j])
		{
			if (si[i] == sj[j])
				i++;
			j++;
		}
		if (si[i] == '\0')
			write(1, "1", 1);
		else 
			write(1, "0", 1);
	}
	write (1, "\n", 1);
	return (0);
} */

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;
		char *a = av[1];
		char *b = av[2];

		while (a[i] != '\0' && b[j] != '\0')
		{
			while (a[i] == b[j])
				i++;
			j++;
		}
		if (a[i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
		
	}
	write(1, "\n", 1);
	return (0);
}