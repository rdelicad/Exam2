/* Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena e invierta las mayúsculas y minúsculas de todas sus letras.
Los demás caracteres permanecen inalterados.

Debe mostrar el resultado seguido de un '\n'.

Si el número de argumentos no es 1, el programa muestra '\n'.

Examples :

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$ */

#include <unistd.h>

/* code 
int main(int ac, char **av)
{
    int i;
    // * recorremos el string hasta null
    //  * filtramos todas las minusculas y le restamos -32 para convertir a mayuscula
    //  * filtramos todas las mayusculas y le sumamos +32 y convertimos en minusculas
   

    i = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] -= 32;
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i] += 32;
            write (1, &av[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
} */

/* code
int main(int ac, char **av)
{
    if (ac == 2)
    {
        char *s = av[1];
        while (*s)
        {
            if (*s >= 'a' && *s <= 'z')
                *s = *s - 32;
            else if (*s >= 'A' && *s <= 'Z')
                *s = *s + 32;
            write(1, &*s, 1);
            s++;
        }
    }
    write(1, "\n", 1);
    return (0);
} */