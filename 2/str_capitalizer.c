/* Assignment name  : str_capitalizer
Expected files   : str_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que tome una o varias cadenas y, para cada argumento
pone en mayúsculas el primer carácter de cada palabra (si es una letra, obviamente),
pone el resto en minúsculas, y muestra el resultado en la salida estándar,
seguido de un \n.

Una "palabra" se define como una parte de una cadena delimitada por espacios/tablillas, o
por el inicio/fin de la cadena. Si una palabra sólo tiene una letra, debe estar
en mayúsculas.

If there are no arguments, the progam must display \n.

Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
$> */

#include <unistd.h>

/* //code
void str_capitalizer(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	write (1, &*str, 1);
	while (*str != '\0')
	{
		//A First Little Test$
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		if (*(str - 1) == ' ' || *(str - 1) == '\t')
			if (*str >= 'a' && *str <= 'z')
				*str -= 32;
		write (1, &*str, 1);
		str++;
	}
}

int main(int ac, char **av)
{
	if (ac == 1)
		write (1, "\n", 1);
	else 
	{
		int i = 1;
		while (i < ac)
		{
			str_capitalizer(av[i]);
			write (1, "\n", 1);
			i++;
		}
	}
	return (0);
} */

/* int main(int ac, char **av)
{
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 1;
	int j = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= 'A' && av[i][j] <= 'Z')
				av[i][j] += 32;
			if (av[i][j - 1] <= 32 )
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
					av[i][j] -= 32;
			write(1, &av[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
} */

