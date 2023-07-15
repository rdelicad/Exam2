/* Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena y la muestre, sustituyendo cada una de sus
letras por la letra 13 espacios por delante en orden alfabético.

'z' se convierte en 'm' y 'Z' en 'M'. Las mayúsculas y minúsculas no se ven afectadas.

La salida irá seguida de una nueva línea.

Si el número de argumentos no es 1, el programa muestra una nueva línea.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$> */

#include <unistd.h>

/* code
int main(int ac, char **av)
{
    int i;
    char *str;
    // * while para recorrer el string
    //  * filtramos por 'a' - 'm' para sumarle 13
    //  * filtramos por 'n' - 'z' para restarle 13
   

    str = av[1];
    i = 0;
    if (ac == 2)
    {
        while (str[i] != '\0')
        {
            if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
                str[i] = str[i] + 13;
            else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
                str[i] = str[i] - 13;
            write (1, &str[i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
} */

