/* Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena y la muestre, sustituyendo cada una de sus
letras por la siguiente en orden alfabético.

'z' se convierte en 'a' y 'Z' en 'A'. Las mayúsculas y minúsculas no se ven afectadas.

La salida irá seguida de un \n.

Si el número de argumentos no es 1, el programa muestra \n.
Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$> */

#include <unistd.h>

/* code
int main(int ac, char **av)
{
    int i;
    char *str;

    i = 0;
    str = av[1];
    // * While para recorrer todo el string
    //  * un if para filtrar entre 'a' y 'y' o 'A' y 'Z' y sumarle + 1 a av[1][i]
    //  * si no, a 'z' y 'Z' restarle 25 para convertirlo en 'a' o 'A'
   
    if (ac == 2)
    {
        while (str[i] != '\0')
        {
            if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
                str[i] = str[i] + 1;
            else if (str[i] == 'z' || str[i] == 'Z')
                str[i] = str[i] - 25;
            write (1, &str[i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
} */

