/* Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Escriba una función que tome un byte, y lo imprima en binario SIN UNA NUEVA LÍNEA
AL FINAL.

Su función debe ser declarada como sigue:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010" */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* code
void print_bits(unsigned char octet)
{
    int i = 7; // para mostrar solo 7 + 1(0) -> 8 caracteres y recorrer el while
    while (i >= 0)
    {
        // *Si el resultado de esta operacion es diferente a cero
        //  * significa que el bit en la posicion "i" es un "1"
        //  * por lo que escribe el caracter 1.
        //  * octet = 2 -> 00000010
        //  * i = 0   1 -> 00000001; i=1 1 -> 00000010; i=2 1-> 00000100 (2 elevado a i)
        //  * entonces 2 & (1 << 1)
        //  * 2         -> 00000010
        //  * (1 << 1)  -> 00000010
        //  * result    -> 00000010 
        //  *
        if (octet & (1 << i))
            write (1, "1", 1);
        // si el resulado es 0, significa que en la posicion i hay un 0
        else
            write (1, "0", 1);
        i--;
    }
}
// * Explicacion de la operacion (1 << i)
//  * significa que el 1 se desplaza i posiciones hacia la izquierda
//  * 1 en binario es 00000001, si i=0, entonces (1 << i) se convierte en -> 00000001
//  * si i=1 se convierte en 00000010
//  * Luego se realiza una operacion bit a bit AND('&') entre octect y (1 << i)
//  * estas operaciones comparan cada bit en la misma posicion, si ambos es 1, el resultado es 1
 */

/* int main(int ac, char **av)
{
    if (ac == 2)
    {
        unsigned char octet;
        octet = atoi(av[1]);
        print_bits(octet);
        printf("\n");
    }
    write (1, "\n", 1);
    return (0);
} */

/* //code 
void print_bits(unsigned char octet)
{
    int i = 7;
    while (i >= 0)
    {
        if (octet & (1 << i))
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }

}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        unsigned char n = atoi(av[1]);
        print_bits(n);
        
    }
    write(1, "\n", 1);
    return (0);
} */

