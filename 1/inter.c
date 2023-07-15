/* Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que tome dos cadenas y muestre, sin dobles, los
caracteres que aparecen en ambas cadenas, en el orden en que aparecen en la primera
cadena.

La visualización irá seguida de un \n.

Si el número de argumentos no es 2, el programa muestra \n.

Examples:

$>./inter "padintno" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6evw6g4f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$ */

#include <unistd.h>

/* code
int	main(int ac, char **av)
{
	int	i = 0;
	int k = 0;
	int l = 0;
	char *s1 = av[1];
	char *s2 = av[2];

	if (ac == 3)
	{
        // recorremos todo s1 con i
		while (s1[i] != '\0')
		{
            // recorremos todos s2 con k
			k = 0;
			while (s2[k] != '\0')
			{
                //si coinciden los caracteres
				if(s1[i] == s2[k])
				{ 
					l = 0;
                    //verificacion de duplicados
					while (s1[l] != s1[i])
						l++;
					if (l == i)
					{
						l = 0;
						while (s2[l] != s2[k])
							l++;
						if (l == k)
							write(1, &s1[i], 1);
					}
				}
				k++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
} */

/* code mio 
 int main(int ac, char **av)
{
	if (ac == 3)
	{
		char array[256] = {0};
		int i = 0;

		while (av[2][i] != '\0')
		{
			//todos los caraceteres del argumento 2 lo convertimos a 1 dentro del array
			array[(int)av[2][i]] = 1;
			i++;
		}
		i = 0;
		while (av[1][i] != '\0')
		{
			if (array[(int)av[1][i]] == 1)
			{
				write(1, &av[1][i], 1);
				//todos los caracteres escritos se ponen a 2 para evitar dobles
				array[(int)av[1][i]] = 2;
			}
			i++;
		}
		
	}
	write(1, "\n", 1);
	return (0);
} */

