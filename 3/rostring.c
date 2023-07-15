/* Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena y muestre esta cadena después de rotarla
una palabra a la izquierda.

Así, la primera palabra se convierte en la última, y las demás permanecen en el mismo orden.

Una "palabra" se define como una parte de una cadena delimitada por espacios/tablillas, o
por el inicio/fin de la cadena.

Las palabras estarán separadas por un solo espacio en la salida.

Si hay menos de un argumento, el programa muestra \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$> */

#include <unistd.h>

/* code 
int main(int argc, char **argv)
{
    int i;
    int start;
    int end;
    int flag;

    flag = 0;
    if (argc > 1 && argv[1][0])
    {
        i = 0;
        while (argv[1][i] == ' ' || argv[1][i] == '\t') //avanzamos hasta primer caracter
            i++;
        start = i;  // guardamos posicion primera palabra
        while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t') //avanzamos por la palabra
            i++;
        end = i;  // guardamos posicion fin palabra
        while (argv[1][i] == ' ' || argv[1][i] == '\t') //avanzamos hasta la siguiente palabra
            i++;
        while(argv[1][i]) //mientras no sea nulo
        {
            //comprobamos si hay dos o mas espacios o uno o más tabuladores
            while ((argv[1][i] == ' ' && argv[1][i + 1] == ' ') || (argv[1][i] == '\t' && argv[1][i + 1] == '\t'))
                i++; 
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                flag = 1; // si el caracter actual es un espacio o tabulador
            write(1, &argv[1][i], 1); //vamos escribiendo caracteres
            i++;
        }
        if (flag)  //se comprueba si habia espacios o tabuladores entre palabras
            write(1, " ", 1); //si lo hay, escribimos un espacio
        while (start < end) 
        {
            write(1, &argv[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
    return(0);
} */

/* // code mio 
int main(int ac, char **av)
{
    if (ac > 1 && av[1][0])
    {
        int start;
        int end;
        int i = 0;
		int flag = 0;
        char *str = av[1];

        while (str[i] <= 32) //saltamos espacios iniciales
            i++;
        start = i;  //guardamos posicion de inico palabra
        while (str && !(str[i] <= 32))
            i++; //recorremos la primera palabra
        end = i; //guardamos posicion final palabra
		while (str[i] <= 32 && str[i] != '\0')
			i++;  //avanzamos hasta la siguente palabra 
        while (str[i]) //vamos a escribir resto del string !cuaida con los tabs
		{
			while (str[i] <= 32 && str[i + 1] <= 32)
				i++; //saltamos todos los espacios
			if (str[i] <= 32)
				flag = 1; //espacio
			write (1, &str[i], 1);
			i++;
		}
		if (flag)
			write (1, " ", 1);
		while (start < end)
		{
			write (1, &str[start], 1);
			start++;
		}

    }
    write (1, "\n", 1);
    return (0);
} */
 
/* //code punteros
int main(int ac, char **av)
{
    if (ac > 1 && av[1][0])
    {
        //"     AkjhZ   zLKIJz , 23y"
        char *start;
        char *end;
        int flag = 0;
        char *s = av[1];

        while (*s <= 32)
            s++;
        start = s;
        while (!(*s <= 32))
            s++;
        end = s;
        while (*s <= 32 && *s != '\0')
            s++;
        while (*s)
        {
            while (*s <= 32 && *(s + 1) <= 32) //(s + 1) es para dejar un espacio antes de la palabra
                s++;
            if (*s <= 32)
                 flag = 1;
            write(1, s, 1);
            s++;
        }
        //Esta flag sirve por si el argumento tiene mas de una palabra
        //escribe un espacio al final de la primera palabra
        //antes de escribir la palabra final
        if (flag)
            write(1, " ", 1);
        while (start < end)
        {
            write(1, start, 1);
            start++;
        }
    } 
    write(1, "\n", 1);
    return (0);
} */

