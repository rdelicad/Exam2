/* Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Escriba una función que convierta el argumento cadena str (base N <= 16)
a un entero (base 10) y lo devuelva.

Los caracteres reconocidos en la entrada son 0123456789abcdef
Por supuesto, hay que recortarlos según la base solicitada. Para
ejemplo, la base 4 reconoce "0123" y la base 16 reconoce "0123456789abcdef".

También deben reconocerse las mayúsculas: "12fdb3" es lo mismo que "12FDB3".

Los signos menos ('-') sólo se interpretan si son el primer carácter de la cadena.
cadena.

Su función debe declararse como sigue:

int	ft_atoi_base(const char *str, int str_base); */

#include <stdio.h>
#include <stdlib.h>

/** Comprueba si el caracter es un espacio o un caracter de control*/
/* int is_blank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

//verifica si c es un caracter permitido en la base dada
int		isvalid(char c, int base)
{
	char digits[17] = "0123456789abcdef";
	char digits2[17] = "0123456789ABCDEF";

	while (base--)
		if (digits[base] == c || digits2[base] == c)
			return (1);
	return (0);
}

// devuelve el valor de un caracter en base 10 (c - caracter + 10)
int		value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int result;
	int sign;

	result = 0;

    // salta espacios en blano
	while (is_blank(*str))
		str++;

    //verifica si el signo es negativo y lo guarda en sign
    if (*str == '-')
        sign = -1;
    sign = 1;
	//sign = (*str == '-') ? -1 : 1;

    // si encuentra un signo se lo salta
	(*str == '-' || *str == '+') ? ++str : 0;

    // bucle mientras los caracteres sean validos en la base
    // se actualiza result multiplicandolo por la base y sumandole
    // el valor numerico de la funcion value_of (base 10)
	while (isvalid(*str, str_base))
		result = result * str_base + value_of(*str++);

    // se multiplica por el signo 
	return (result * sign);
}


int main(int argc, char **argv)
{
    if (argc == 3)
    {
        //convertimos el segundo argumento a int con atoi
        printf("%d\n", ft_atoi_base(argv[1], atoi(argv[2])));
    }
    return (0);
} */


/* code 
char	to_lower(char c)
{
	// si es mayuscula convierte a minuscula
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int get_digit(char c, int digits_in_base)
{
	int max_digit;
	if (digits_in_base <= 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 + 'a';

	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int digit;

	if (*str == '-')
	{
		sign = -1;
		++str;
	}

	while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
	{
		result = result * str_base;
		result = result + (digit * sign);
		++str;
	}
	return (result);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d\n", ft_atoi_base(av[1], atoi(av[2])));
	}
	printf("\n");
	return (0);

} */

int num_base(char c, int base)
{
	if (base < 10)
		// Si esta dentro del rango de 0-9, evalua como 1, si no, como 0
		return (c >= '0' && c <= '9');
	//comprueba si el caracter c esta dentro del rango de la base
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) || (c >= 'a' && c <= ('a' + base - 10)));
	// ! ('a' + base - 10) da el maximo de cada base introducida en caso que base > 9
	
} 

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	// filtro por si es str no esta vacio o base < 2 o base > 16
	if (str[i] == '\0' || (str_base < 2 || str_base > 16))
		return (0);

	//Saltar espacios
	while (str[i] <= 32)
		i++;
	
	//Control de signos
	if (str[i] == '-')
		sign = -1;
	else if (str[i] == '+')
		sign = 1;

	//obtener el numero
	while (str[i] && num_base(str[i], str_base))
	{
		//base 16 minusculas
		if (str[i] >= 'A' && 'F' >= str[i])
			res = (res * str_base) + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && str[i] <= 'f')
			res = (res * str_base) + (str[i] - 'a' + 10);
		else
			res = (res * str_base) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int main(void)
{
	char *str = "0100011";
	int base = 2;
	int res = ft_atoi_base(str, base);
	printf ("%d", res);
	return (0);

}