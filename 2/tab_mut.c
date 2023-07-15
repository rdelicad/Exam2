/* Assignment name  : tab_mult
Expected files   : tab_mult.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que muestre la tabla de multiplicar de un número.

El parámetro siempre será un número estrictamente positivo que quepa en un int,
y dicho número multiplicado por 9 también cabe en un int.

Si no hay parámetros, el programa muestra \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$> */

#include <unistd.h>

/* //code
int ft_atoi(char *str)
{
    int n = 0;

    while (*str >= '0' && *str <= '9')
    {
        n = (n * 10) + (*str - '0');
        str++;
    }
    return (n);
}

void ft_putnbr(int n)
{
    if (n > 10)
        ft_putnbr(n / 10);
    char c = (n % 10) + '0';
    write (1, &c, 1);
}

void tab_mul(int n)
{
    int i = 1;
    int res;

    while (i <= 9)
    {
        res = i * n;
        ft_putnbr(i);
        write (1, " x ", 3);
        ft_putnbr(n);
        write (1, " = ", 3);
        ft_putnbr(res);
        write (1, "\n", 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac != 2)
        write (1, "\n", 1);
    else 
        tab_mul(ft_atoi(av[1]));
    return (0);
} */

