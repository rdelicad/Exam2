/* Assignment name  : snake_to_camel
Expected files   : snake_to_camel.c
Allowed functions: malloc, free, realloc, write
--------------------------------------------------------------------------------

Escriba un programa que tome una cadena en formato snake_case
y la convierta en una cadena en formato lowerCamelCase.

Una cadena snake_case es una cadena donde cada palabra está en minúsculas, separadas por
un guión bajo "_".

Una cadena lowerCamelCase es una cadena en la que cada palabra empieza por mayúscula
excepto la primera.

Examples:
$>./snake_to_camel "here_is_a_snake_case_word"
hereIsASnakeCaseWord
$>./snake_to_camel "hello_world" | cat -e
helloWorld$
$>./snake_to_camel | cat -e
$ */

#include <unistd.h>

/* //code 



int main(int ac, char **av)
{
    if (ac == 2)
    {
        char *s = av[1];
        int i = 0;
        while (s[i] != '\0')
        {
            // buscamos el '_', sumamos 1 y convertimos a mayuscula
            if (s[i] == '_')
            {
                i++;
                s[i] -= 32;
            }    
            write (1, &s[i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
 */

/* //code mio 
int main(int ac, char **av)
{
    if (ac == 2)
    {
        //"here_is_a_snake_case_word"
        char *s = av[1];
        while (*s)
        {
            if (*s == '_')
            {
                s++;
                *s -= 32;
            }
            write(1, &*s, 1);
            s++;
        }
    }
    write(1, "\n", 1);
    return (0);
} */

