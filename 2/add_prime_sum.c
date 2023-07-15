/* Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Escriba un programa que tome como argumento un número entero positivo y muestre la suma
de todos los números primos inferiores o iguales a él seguida de una nueva línea.

Si el número de argumentos no es 1, o el argumento no es un número positivo,
simplemente muestra 0 seguido de una nueva línea.

Sí, los ejemplos son correctos.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$> */



#include <unistd.h>
#include <stdio.h>


/* code
int		ft_atoi(char *str)
{
	int n = 0;

	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - '0';
		++str;
	}
	return (n);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int		is_prime(int n)
{
	int i = 2;

	while (i < n)
	{
		if (n % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int		add_prime_sum(int n)
{
	int sum = 0;
	int i = 2;

	while (i <= n)
	{
		if (is_prime(i) == 1)
			sum += i;
		++i;
	}
	return (sum);
}

int		main(int argc, char **argv)
{
	int n;
	int sum;

	if (argc == 2 && (n = ft_atoi(argv[1])))
	{
		sum = add_prime_sum(n);
		ft_putnbr(sum);
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
} */

/* code mio 
int ft_atoi(char *str)
{
	int i = 0;
	int n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n);
}

void ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	char c = (n % 10) + '0';
	write (1, &c, 1);
}

int is_prime(int i)
{
	int j = 2;

	while (j < i)
	{
		if (i % j == 0)
			return (0);
		j++;
	}
	printf("%d+", j);
	return (1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int n = ft_atoi(av[1]);
		int i = 2;
		int res = 0;
		while (i <= n)
		{
			if (is_prime(i) == 1)
				res += i;
			i++;
		}
		ft_putnbr(res);
	}
	else
		ft_putnbr(0);
	write(1, "\n", 	1);
	return (0);
} */

