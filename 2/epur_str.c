/* Assignment name  : epur_str
Expected files   : epur_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Escriba un programa que tome una cadena y la muestre con exactamente un
espacio entre palabras, sin espacios ni tabulaciones ni al principio ni al final,
seguida de un \n.

Una "palabra" se define como una parte de una cadena delimitada por espacios/tablillas, o
por el inicio/fin de la cadena.

Si el número de argumentos no es 1, o si no hay palabras para mostrar, el programa
programa muestra \n.

Example:

$> ./epur_str "vous voyez c'est facile d'afficher la meme chose" | cat -e
vous voyez c'est facile d'afficher la meme chose$
$> ./epur_str " seulement          la c'est      plus dur " | cat -e
seulement la c'est plus dur$
$> ./epur_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./epur_str "" | cat -e
$
$>
 */

#include <unistd.h>

/* //" seulement          la c'est      plus dur "
int main(int ac, char **av)
{
    if (ac == 2)
    {
        char *str = av[1];
        int i = 0;
        int flag; //indica si se ha encontrado un espacio o no

        while (str[i] == ' ' || str[i] == '\t') 
            i++;
        while (str[i])
        {
            if (str[i] == ' ' || str[i] == '\t')
                flag = 1;
            if (str[i] != ' ' && str[i] != '\t')
            {
                if (flag)
                    write (1, " ", 1);
                flag = 0;
                write (1, &str[i], 1);
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
        int i = 0;
        int flag = 0;
        char *s = av[1];

        while (s[i] && s[i] <= 32)
            i++;
        while (s[i] != '\0')
        {
            //este if va saltando cada espacio y poniendo la flag = 1
            if (s[i] <= 32)
                flag = 1;
            if (s[i] != '\0' && !(s[i] <= 32))
            {
                //si antes encontro un espacio, primero escribe el espacio y luego las letras
                if (flag)
                    write(1, " ", 1);
                flag = 0;
                write(1, &s[i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
 */


