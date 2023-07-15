/*Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena como parámetro, e imprima sus palabras en 
orden inverso.

Una "palabra" es una parte de la cadena delimitada por espacios y/o tabuladores, o el 
inicio/fin de la cadena.

Si el número de parámetros es distinto de 1, el programa mostrará 
'\n'.

En los parámetros que se van a probar, no habrá ningún espacio "adicional" (es decir, no habrá espacios en blanco). 
espacios "adicionales" (es decir, no habrá espacios adicionales ni al principio ni al 
final de la cadena, y las palabras siempre estarán separadas exactamente por un espacio).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>*/

#include <unistd.h>

/* original
int main(int ac, char **av)
{
    int start; // índice del inicio de la palabra actual
    int end; // índice del final de la palabra actual
    int i = 0; // índice para recorrer la cadena de texto
    char *str = av[1]; // cadena de texto a imprimir
     // Verificar que se haya pasado una cadena de texto como argumento
	if (ac == 2)
	{
        // Obtener el tamaño de la cadena de texto
		while (str[i] != '\0')
			i++;
         // Recorrer la cadena de texto de atrás hacia adelante
		while (i >= 0)
		{
            // Saltar los espacios en blanco al final de la cadena
            while (str[i] == '\0' || str[i] == ' ' || str[i] == '\t')
				i--;
             // Guardar el índice del final de la palabra actual
			end = i; 
             // Recorrer la palabra actual
			while (str[i] && str[i] != ' ' && str[i] != '\t')
				i--;
             // Guardar el índice del inicio de la palabra actual
			start = i + 1; 
             // Imprimir la palabra actual
			int flag = start; //para recordar el inicio de la palabra actual
			while (start <= end)
			{
                write(1, &str[start], 1);
				start++;
			}
             // Agregar un espacio entre palabras (excepto al principio)
			if (flag != 0)
                write(1, " ", 1);
		}
	}
     // Imprimir un salto de línea al final
    write(1, "\n", 1);
} */

/*  //code
int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	char *str = av[1];
	int flag;
	int start;
	int end;
	int i = 0;

	while (str[i] != '\0')
		i++;  //legamos hasta el final
	while (i >= 0)
	{
		while (str[i] <= 32)
			i--;  //saltamos espacios o vacio
		end  = i; //asignamos fin de palabra
		while (!(str[i] <= 32))
			i--;  //recorremos toda la palabra
		start = i + 1; //asignamos inico palabra

		flag = start; //recordar inicio palabra
		while (start <= end)
		{
			write (1, &str[start], 1);
			start++; // escribimos palabra
		}
		if (flag != 0)
			write (1, " ", 1);
	}
}  */

int main(int ac, char **av)
{
	//"Wingardium Leviosa"
	if (ac == 2)
	{
		
	}
	write(1, "\n", 1);
	return (0);
}

