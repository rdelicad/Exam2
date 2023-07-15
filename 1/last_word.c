/* Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena y muestre su última palabra seguida de una \n.

Una palabra es una sección de una cadena delimitada por espacios/tablillas o por el inicio/final de
la cadena.

Si el número de parámetros no es 1, o no hay palabras, muestra una nueva línea.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$> */

#include <unistd.h>

/*
int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
        // recorremos todo el string
		while (av[1][i] != '\0')
			i++;
        // ahora empezamos desde el final
		i--;
        //retrocedemos saltando espacios y tabuladores y que no haya llegado al principio (0)
		while ((av[1][i] == ' ' || av[1][i] == '\t') && i != 0)
			i--;	
        // seguimos retrocediendo (ahora serian letras) y no haya llegado a 0
		while (av[1][i] != ' ' && av[1][i] != '\t'  && i != 0)
			i--;
        // si llegamos a un espacio o tabulador, lo saltamos para situarnos en las letras
		if (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
        // escribimos cada caracter hasta NULL o espacio o tabulador
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
		{	
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
} */

/* //code mio 
int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *s = av[1];
		int i = 0;

		while (s[i] != '\0')
			i++;
	// todo Obligado saltar espacio vacio y poner que (i != 0)
		i--;
		while (s[i] <= 32 && s[i] != 0)
			i--;
		while ((!(s[i] <= 32)) && s[i] != 0)
			i--;
		while (s[i] <= 32)
			i++;
		while (!(s[i] <= 32) && s[i] != '\0')
		{
			write(1, &s[i], 1);
			i++;
		}
		
	}
	else
		write(1, "\n", 1);
	return (0);
} */

