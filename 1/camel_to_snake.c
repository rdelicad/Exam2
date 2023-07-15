/* Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, free, realloc, write
--------------------------------------------------------------------------------

Escriba un programa que tome una cadena en formato minúsculaCamelCase
y la convierta en una cadena en formato snake_case.

Una cadena en lowerCamelCase es una cadena en la que cada palabra empieza por mayúscula
excepto la primera.

Una cadena snake_case es una cadena en la que cada palabra está en minúsculas, separadas por
un guión bajo "_".

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$ */

#include <unistd.h>

/* code 
int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            // * filtramos por letras mayusculas
            //  * escribimos el signo "_"
            //  * y convertimos a minuscula (+32)
           
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                write(1, "_", 1);
                av[1][i] += 32;
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
} */

/* code mio 
int main(int ac, char **av)
{
    if (ac == 2)
    {
        char *s = av[1];

        while (*s)
        {
            if (*s  >= 'A' && *s <= 'Z')
            {
                write(1, "_", 1);
                *s += 32;
            }
            write (1, &*s, 1);
            s++;
        }
    }
    write (1, "\n", 1);
    return (0);
} */

