/* Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Escribe una función que convierta el argumento cadena str en un entero (tipo int)
y lo devuelva.

Funciona de forma muy parecida a la función estándar atoi(const char *str), véase el manual.

Su función debe declararse como sigue:

int ft_atoi(const char *str); */

#include <stdio.h>

/* code 
int ft_atoi(const char *str)
{
    int nbr = 0;
    int sig = 1;
    int i = 0;

    // Si entra negativo lo multiplicamos por (-1) para poner el numero en un int negativo
   
    if (str[0] == '-' || str[0] == '+')
    {
        if (str[0] == '-')
            sig = -1;
        i += 1;
        // segun sea + o - , i valdra +1 o -1
    }
    // condicion de hasta el fin de cadena y solo numero digitos, si no, retorna 0
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    // * nbr es donde se guarda el int convertido
    //  * (nbr * 10) desplaza el numero existente a la izquierda
    //  * (str[i] - '0') obtiene el valor numerico del digito
        nbr = (nbr * 10) + (str[i++] - '0');
        // multiplicacion para obtener (=) o (-)
    return (nbr * sig);
} 

 int main(void)
{
    char *str = "-123";
    int i = ft_atoi(str);
    printf("%i", i);
    return (0);
} */

/* code mio 
int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int n = 0;

    if (str[i] == '-')
        sign = -1;
    else if (str[i] == '+')
        sign = 1;
    i++;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            //245
            //n = 0; str[i] = 50; (0 * 10) + (50 - 48) = 2;
            //n = 2; str[i] = 52; (2 * 10) + (52 - 48) = 20 + 4 = 24;
            //n = 16; str[i] = 53; (24 * 10) + (53 - 48) = 240 + 5 = 245;
            n = (n * 10) + (str[i] - '0');
            i++;
        }
    }
    return (n * sign);
}

int main(int ac, char **av)
{
    if (ac < 2)
    {
        printf("Error\n");
        return (0);
    }
    printf("Convertido: %i", ft_atoi(av[1]));
} */

