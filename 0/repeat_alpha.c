/* Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa llamado repetir_alfa que tome una cadena y la muestre
repitiendo cada carácter alfabético tantas veces como su índice alfabético,
seguido de una nueva línea.

'a' se convierte en 'a', 'b' en 'bb', 'e' en 'eeeee', etc...

Case no cambia.

Si el número de argumentos no es 1, sólo se muestra una nueva línea.

Ejemplos:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$> */

#include <unistd.h>

/* code
int main(int ac, char **av)
{
    int i;
    int j;
    char *str; //metemos **av en un puntero

    i = 0;
    j = 0;
    if (ac == 2)
    {
        str = av[1];
        while (str[i] != '\0')
        {
           j = 1; // valor para cualquier otro caracter. 
           if (str[i] >= 'A' && str[i] <= 'Z')
                j = str[i] - 64;  // obtenemos el valor de la letra a=1, b=2, c=3, ...
           if (str[i] >= 'a' && str[i] <= 'z')
                j = str[i] - 96;
           while (j >= 1) //Si entra otro caracteer que no sea una letra, solo se repite una vez
           {
                write(1, &str[i], 1);
                j--;
           }
           i++;
        }
    }
    write (1, "\n", 1);
    return (0);
} */

/* code mio
int main(int ac, char **av)
{
     if (ac == 2)
     {
          //"abc"
          int i = 0;
          int j = 0;
          while (av[1][i] != '\0')
          {
               if (av[1][i] >= 'a' && av[1][i] <= 'z')
               {
                    //b -> j = se repite una vez, se escribe 2 veces -> b = 'b' - 'a' 97 - 98 = 1 vez se repite
                    write(1, &av[1][i], 1);
                    j = av[1][i] - 'a';
                    while (j > 0)
                    {
                         write (1, &av[1][i], 1);
                         j--;
                    }
               }
               else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
               {
                    //b -> j = se repite una vez, se escribe 2 veces -> b = 'b' - 'a' 97 - 98 = 1 vez se repite
                    write(1, &av[1][i], 1);
                    j = av[1][i] - 'A';
                    while (j > 0)
                    {
                         write (1, &av[1][i], 1);
                         j--;
                    }
               }
               else 
                    write (1, &av[1][i], 1);
               i++;
          }
     }
     write (1, "\n", 1);
     return (0);
} */

