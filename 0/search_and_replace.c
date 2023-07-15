/* Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Escribe un programa llamado buscar_y_reemplazar que tome 3 argumentos, el primer
argumentos es una cadena en la que sustituir una letra (2º argumento) por
otra (3er argumento).

Si el número de argumentos no es 3, sólo muestra una nueva línea.

Si el segundo argumento no está contenido en el primero (la cadena)
entonces el programa simplemente reescribe la cadena seguida de una nueva línea.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $ */

#include <unistd.h>

/* code
int main(int ac, char **av)
{
    int i;

    i = 0;
    // Numero de argumentos + nombre programa -> 3+1 = 4
    if (ac == 4)
    {
        // * si el segundo arguento (av[2][0]) esta dentro del abecedario y tiene nulo (av[2][1] == '\0')
        //  * y dentro de ese if creamos otro filtro para el tercer argumento
        //  * que (av[3][0]) sea una letra y solo una, o sea, tenga (av[3][1] == '\0')
        //  * Haremos un while sobre el primer argumento (av[1][i]) hasta null
        //  * filtrando si encontramos la letra del segundo argumento (av[2][0]) y 
        //  * Sustituyendolo por el del tercero (av[3][0])
       

        if(((av[2][0] >= 'a' && av[2][0]<= 'z') || (av[2][0] >= 'A' && av[2][0]<= 'Z')) && av[2][1] == '\0')
			if (((av[3][0] >= 'a' && av[2][0]<= 'z') || (av[3][0] >= 'A' && av[3][0]<= 'Z')) && av[3][1] == '\0')
            {
                while (av[1][i] != '\0')
                {
                    if (av[1][i] == av[2][0])
                        av[1][i] = av[3][0];
                    write (1, &av[1][i], 1);
                    i++;
                }
            }
    }
    write (1, "\n", 1);
    return (0);
} */

/* code mio 
int main(int ac, char **av)
{
    if (ac == 4)
    {
        //"Papache est un sabre" "a" "o"
        int i = 0;
        while (av[1][i] != '\0')
        {
            if (av[2][1] == '\0' && av[3][1] == '\0')
            {
                if (av[1][i] == av[2][0])
                    av[1][i] = av[3][0];
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 	1);
    return (0);
} */