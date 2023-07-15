
/* Nombre de la tarea: fizzbuzz
Archivos esperados: fizzbuzz.c
Funciones permitidas: write
Escribe un programa que imprima los números del 1 al 100, separados por un salto de línea.

Si el número es múltiplo de 3, imprime 'fizz' en su lugar.

Si el número es múltiplo de 5, imprime 'buzz' en su lugar.

Si el número es múltiplo tanto de 3 como de 5, imprime 'fizzbuzz' en su lugar.

Ejemplo:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$> */

#include <unistd.h>

/* int	main(void)
{
	int	i;
	int k;
	int l;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i > 10)
		{
			k = i / 10 + '0';
			l = i % 10 + '0';
			write (1, &k, 1);
			write (1, &l, 1);
		}
		else
		{
			k = i + '0';
			write(1, &k, 1);
		}
		write(1,"\n", 1);
		i++;
	}		
} */

