/* Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------
Escriba una función que tome un int y lo convierta en una cadena terminada en '\0'.
La función devuelve el resultado en una matriz tipo char que debe asignar.

Your function must be declared as follows:

char	*ft_itoa(int nbr); */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/* //code
int		absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int		get_len(int nbr)
{
	int len = 0;
	if (nbr <= 0)
		++len;
	while (nbr != 0)
	{
		++len;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char *result;
	int len;

	len = get_len(nbr);
	result = malloc(sizeof(char) * (len + 1));
	result[len] = '\0';

	if (nbr < 0)
		result[0] = '-';
	else if (nbr == 0)
		result[0] = '0';

	while (nbr != 0)
	{
		--len;
		result[len] = absolute_value(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (result);
}

int		main(void)
{
	int d = INT_MIN;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = -13;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = 0;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = 5;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = INT_MAX;
	printf("%d =? %s\n", d, ft_itoa(d));
}
 */

/* //code mio
int  valor_absoluto(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int longitud(int nbr)
{
	int i = 0;
	if (nbr <= 0)
		++i;  //cuenta el numero negativo
	while (nbr != 0) // ! ojo CERO 0
	{
		++i; //por cada numero que se divide
		nbr = nbr / 10;
	}
	return (i);
}

char *ft_itoa(int nbr)
{
	//234
	char* res;
	int len;

	len = longitud(nbr);
	// -60 --> len = 3; posicion 3.
	res = (char *)malloc(sizeof(char) * len + 1);
	res[len] = '\0';

	if (nbr < 0)
		res[0] = '-';
	else if (nbr == 0)
		res[0] = '0'; // ! ojo '0' caracter

	while (nbr != 0) //de un int 0
	{
		// salta el '0' y se queda en len = 2 --> 0
		// cuando vuelve len = 1 --> 1
		--len; 
		//(|60| % 10) + '0' = 0  + 48 = 48 = '0'
		//res[2] == 0
		//(|6| % 10) + '0' = 6 + 48 = 54 = '6'
		//res[1] == 6
		res[len] = valor_absoluto(nbr % 10) + '0';
		//nbr = 60 / 10 = -6
		//nbr = 6 / 10 = 
		nbr = nbr / 10;
	}
	return (res);
}

int main(void)
{
	int d = INT_MIN;
	printf("%d | %s\n",d , ft_itoa(d));
	d = -13;
	printf("%d | %s\n",d , ft_itoa(d));
	d = 0;
	printf("%d | %s\n",d , ft_itoa(d));
	d = 45;
	printf("%d | %s\n",d , ft_itoa(d));
	d = INT_MAX;
	printf("%d | %s\n",d , ft_itoa(d));

	return (0);
}  */



int main(void)
{
	int d = INT_MIN;
	printf("%d | %s\n",d , ft_itoa(d));
	d = -13;
	printf("%d | %s\n",d , ft_itoa(d));
	d = 0;
	printf("%d | %s\n",d , ft_itoa(d));
	d = 45;
	printf("%d | %s\n",d , ft_itoa(d));
	d = INT_MAX;
	printf("%d | %s\n",d , ft_itoa(d));

	return (0);
}