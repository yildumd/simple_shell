#include "main.h"


/**
 * token - Tokenize a string based on a delimiter.
 * @str: The input string to tokenize.
 * @delim: The delimiter string used for tokenization.
 *
 * Return: An array of strings containing the tokens.
 */

char **token(char *str, char *delim)
{
    char *stok, **stoks;
	int count = 0;

	stok = strtok(str, delim);
	stoks = (void *)memory(100, sizeof(char **));

	if (!stoks)
	{
		free(stoks);
		return (NULL);
	}

	while (stok)
	{
		stoks[count] = stok;
		stok = strtok(NULL, delim);
		count++;
	}
	return (stoks);
}
