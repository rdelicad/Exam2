/* Assignment name  : do_op
Expected files   : do_op.c
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Escribe un programa que tome tres cadenas:
- La primera y la tercera son representaciones de enteros con signo base-10
  que caben en un int.
- La segunda es un operador aritmético a elegir entre: + - * / %

El programa debe mostrar el resultado de la operación aritmética solicitada,
seguido de una nueva línea. Si el número de parámetros no es 3, el programa
sólo muestra una nueva línea.

Se puede suponer que la cadena no tiene errores ni caracteres extraños. Los números negativos de
en la entrada o en la salida, tendrán uno y sólo un '-' inicial. El
resultado de la operación cabe en un int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$ */

#include <stdlib.h>
#include <stdio.h>

/* code 
int main(int ac, char **av)
{
    //int i = 0;
    if (ac == 4)
    {
        // * Utilizamos 'atoi' para convertir los caracteres a su valor numerioco 'int'
        //  * lo metemos en una variable tipo int el valor para operar con ellos
        //  * variable tipo char para el operador
        //  * filtramos casa operacion segun el tipo de operador
       
        int arg1 = atoi(av[1]);
        char arg2 = av[2][0];
        int arg3 = atoi(av[3]);
        int result;
        if (arg2 == '+')
            result = arg1 + arg3;
        else if (arg2 == '-')
            result = arg1 - arg3;
        else if (arg2 == '*')
            result = arg1 * arg3;
        else if (arg2 == '/')
            result = arg1 / arg3;
        else if (arg2 == '%')
            result = arg1 % arg3;
        
        printf("%d", result);
    }
    else
        write(1, "\n", 1);
    return (0);
} */

/* code mio
int main(int ac, char **av)
{
    if (ac == 4)
    {
        int a = atoi(av[1]);
        int b = atoi(av[3]);
        
        if (av[2][0] == '+')
            printf("%d", (a + b));
        if (av[2][0] == '-')
            printf("%d", (a - b));
        if (av[2][0] == '/')
            printf("%d", (a / b));
        if (av[2][0] == '*')
            printf("%d", (a * b));
        if (av[2][0] == '%')
            printf("%d", (a % b));
    }
    printf("\n");
    return (0);
} */