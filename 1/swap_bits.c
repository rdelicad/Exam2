/* Assignment name  : swap_bits
Expected files   : swap_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Escribe una función que tome un byte, intercambie sus mitades (como en el ejemplo) y
devuelva el resultado.

Tu función debe declararse como sigue

unsigned char swap_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100 | 0001
     \ /
     / \
 0001 | 0100 */


 #include <unistd.h>
 #include <stdio.h>

/* code
unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int main() {
    unsigned char octet = 0xA5; // Representación hexadecimal de un octeto
    unsigned char swap = swap_bits(octet);
    
    printf("Antes: 0x%X\n", octet);
    printf("Despues: 0x%X\n", swap);
    
    return 0;
}
int	main(int argc, char **argv)
{
	unsigned char c;
    if (argc == 2)
    {

        c = argv[1][0];
        write(1, &c, 1);
        write(1, "\n", 1);
        c = swap_bits(c);
        write(1, &c, 1);
        write(1, "\n", 1);
    }

	return (0);
}  */




 