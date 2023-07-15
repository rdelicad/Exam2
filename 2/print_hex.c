/* Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que tome un número positivo (o cero) expresado en base 10
y lo muestre en base 16 (letras minúsculas) seguido de una nueva línea.

Si el número de parámetros no es 1, el programa muestra una nueva línea.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$ */

#include <unistd.h>


/* //code
int ft_atoi(char *str)
{
	int n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	return (n);
}

void ft_hexa(int n)
{
	char *hex = "0123456789abcdef";

	if (n >= 16)
		ft_hexa(n / 16);
	write (1, &hex[n % 16], 1);

}

int main(int ac, char **av)
{
	 if (ac == 2)
		ft_hexa(ft_atoi(av[1]));
	 write (1, "\n", 1);
	 return (0);
}
 */

