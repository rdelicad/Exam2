/* Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str); */

#include <unistd.h>
#include <stdio.h>

/* code
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i;
        i = ft_strlen(av[1]);
        printf("%i", i);
        return (0);
    }
}
 */


