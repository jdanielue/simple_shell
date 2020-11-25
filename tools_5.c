#include "holberton.h"

/**
 * no_spaces - Free memory.
 * @linea: line splited into tokens
 * Return: No return.
 */

char *no_spaces(char *linea)
{
	char mibuffer[1024], auxiliar[1024], flag = 't';
	int i, j = 0;

	for (i = 0; linea[i] != '\0'; i++)
	{
		if (linea[i] == ' ' && linea[i + 1] == ' ')
		{
		continue;
		}
		else
		{
		mibuffer[j] = linea[i];
		j++;
		}
	}
	mibuffer[j] = '\0';

	for (i = 0; mibuffer[i]; i++)
		linea[i] =  mibuffer[i];
	linea[i] = 0;

	if (mibuffer[0] == ' ')
	{
		for (i = 0; mibuffer[i] != '\0'; i++)
		{
			auxiliar[i] = mibuffer[i + 1];
			linea[i] = auxiliar[i];
		}
		linea[i] = '\0';
	}

	while (flag == 't')
	{
	flag = 'f';
	for (i = 0; *(linea + i); i++)
	{
		if (*(linea + i + 1) == 0 && (*(linea + i) == 32))
		{
			*(linea + i) = 0;
			flag = 't';
		}
	}
	}
	return (linea);
}
