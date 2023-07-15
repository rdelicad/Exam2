/* Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Escribe una función que tome una cadena, la divida en palabras y las devuelva como
una matriz de cadenas terminada en NULL.

Una "palabra" se define como una parte de una cadena delimitada por espacios/tabulaciones/nuevas
líneas, o por el inicio/fin de la cadena.

Su función debe declararse como sigue:

char    **ft_split(char *str); */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* code 2
int	ft_wordlen(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		++i;
	return (i);
}

char	*word_dupe(char *str)
{
	int i = 0;
	int len = ft_wordlen(str);
	char *word = malloc(sizeof(char) * (len + 1));
	
	word[len] = '\0';
	while (i < len)
	{
		word[i] = str[i];
		++i;
	}
	return (word);
}

void	fill_words(char **array, char *str)
{
	int word_index = 0;
	
	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str != '\0')
	{
		array[word_index] = word_dupe(str);
		++word_index;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			++str;
	}
}

int		count_words(char *str)
{
	int num_words = 0;
	
	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str != '\0')
	{
		++num_words;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			++str;
	}
	return (num_words);
}

char	**ft_split(char *str)
{
	int		num_words;
	char	**array;
	
	num_words = count_words(str);
	array = malloc(sizeof(char *) * (num_words + 1));
	
	array[num_words] = 0;
	fill_words(array, str);
	return (array);
} 

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **split = (char **)malloc(sizeof(char *) * 256);
	if (!split)
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			split[k][j] + str[i];
			j++;
			i++;
		}
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		split[k][j] = '\0';
		k++;
	}
	split[k] = NULL;
	return (split);
} 

int main(void) 
{ 
	char *s1 = "hola espacio"; 
	char *s2 = "hola\ttab"; 
	char *s3 = "hola\nline"; 
	char **split; 
 
	split = ft_split(s1); 
	for (int i = 0; split[i]; i++) 
		printf("%s\n", split[i]); 
	free(split); 
 
	split = ft_split(s2); 
	for (int i = 0; split[i]; i++) 
		printf("%s\n", split[i]); 
	free(split); 
 
	split = ft_split(s3); 
	for (int i = 0; split[i]; i++) 
		printf("%s\n", split[i]); 
	free(split); 
 
	return (0); 
}   */

/* //code mio
char space(char *str)
{
	while (*str <= 32)
		str++;
	return (*str);
}

int palabras(char *str)
{
	int i = 0;
	while (*str)
	{
		while (*str <= 32)     //quitamos espacios, tabs, etc
			str++;
		i++;                  //lleva la cuenta de las palabras encontradas
		while (!(*str <= 32))  //Recorre los caracteres de las palabras
			str++;
	}
	return (i); //vevuelve numero de palabras encontradas
}

int caracteres(char *str)
{
	int i = 0;
	while (*str)
	{
		while (*str <= 32)   //saltamos espacios, tabs, etc.
			str++;
		while (!(*str <= 32))
		{
			str++;  //recorre cada caracter
			i++;  //cuenta los caracteres
		}
	}
	return (i);
}

char **ft_split(char *str)
{
	int j, k = 0;
	char **split = (char **)malloc(sizeof(char *) * palabras(str) + 1); //creamos memoria de nuevo array 
	if (!split)
		return (NULL);
	while (*str)
	{
		while (*str && *str <= 32) //saltamos espacios
			str++;
		if (*str)
		{
			j = 0;
			split[k] = (char *)malloc(sizeof(char) * caracteres(str) + 1); //creamos memoria para elementos
			if (!split)
				return (NULL);
			while (*str && !(*str <= 32)) //recorremos caracteres
				split[k][j++] = *str++;   //copiamos cada caracter de str en array
			split[k++][j] = '\0';         //añadimos vacio al final de cada palabra
		}
	}
	split[k] = NULL;  
	return (split);
}

int main(void)
{
	char *str = "Hola, mundo! Esto es un prueba de ejemplo de cadena entrante";
	char **out = ft_split(str);
	
	int i = 0;
	while (out[i])
	{
		printf("%s\n", out[i]);
		i++;
	}
	return (0);
} */

char    **ft_split(char *str)
{
	
}

int main(void)
{
	char *str = "Hola, mundo! Esto es un prueba de ejemplo de cadena entrante";
	char **out = ft_split(str);
	
	int i = 0;
	while (out[i])
	{
		printf("%s\n", out[i]);
		i++;
	}
	return (0);
}