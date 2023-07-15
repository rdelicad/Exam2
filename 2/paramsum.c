/* Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que muestre el número de argumentos que se le pasan, seguido de
una nueva línea.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$> */

#include <unistd.h>

/* //code
void ft_putnbr(int n)
{
    char res;

    if (n >= 10)
        ft_putnbr(n / 10);
    res = (n % 10) + '0';
    write (1, &res, 1);
}

int main(int ac, char **av)
{
    (void) av[1];
    
    ft_putnbr(ac - 1);
    write (1, "\n", 1);
    return (0);
} */

/* code mio 
void putnbr(int n)
{
    if (n > 9)
        putnbr(n / 10);
    char c = n % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    (void) av;
    if (ac == 1)
        write(1, "0", 1);
    if (ac > 1)
    {
        int i = 0;
        while (i < ac)
            i++;
        putnbr(i - 1);
    }
    return (0);
} */