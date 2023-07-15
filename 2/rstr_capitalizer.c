/* Assignment name  : rstr_capitalizer
Expected files   : rstr_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que tome una o varias cadenas y, para cada argumento, ponga 
el último carácter que es una letra de cada palabra en mayúsculas y el resto
en minúsculas y, a continuación, muestre el resultado seguido de un \n.

Una palabra es una sección de la cadena delimitada por espacios/tablillas o el inicio/fin de la
cadena. Si una palabra tiene una sola letra, debe escribirse en mayúscula.

Una letra es un carácter del conjunto [a-zA-Z].

Si no hay parámetros, aparece \n.

Examples:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
$> */

#include <unistd.h>

/* //code
void rstr_capitalize(char *str)
{
	//"a FiRSt LiTTlE TESt"
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		if (*(str + 1) == ' ' || *(str + 1) == '\t' || *(str + 1) == '\0')
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
			rstr_capitalize(av[i]);
			write (1, "\n", 1);
			i++;
		}
	}
	return (0);
} */

#include <unistd.h>

/* //code
int main(int ac, char **av)
{
	int i = 1;
	int j = 0;
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i < ac)
	{
		j = 0; // Reiniciar j en cada iteración
		while (av[i][j])
		{
			if (av[i][j] >= 'A' && av[i][j] <= 'Z')
				av[i][j] += 32;
			if (av[i][j + 1] <= 32 || av[i][j + 1] == '\0')
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

