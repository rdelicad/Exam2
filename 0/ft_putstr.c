/*

Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------


 Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows: */

#include <stdio.h>
#include <unistd.h>


/* void    ft_putstr(char *str)
{
    while (*str)
        write (1, &*str++, 1);
}

int main(int argc, char **argv)
{
    if(argc == 1)
    {
        printf("ft_putstr(\"\")\n");
        return(0);
    }
    printf("ft_putstr(\"%s\")\n", argv[1]);
    ft_putstr(argv[1]);
    printf("\n");
    return(0);
} */

