#include "holberton.h"

/**
 * handle_sigint - Free memory.
 * @a: line splited into tokens
 * Return: No return.
 */

void handle_sigint(int __attribute__((unused)) a)
{
	char *my_propmt = "#U# ";

	write(STDIN_FILENO, "\n", 1);
	write(STDOUT_FILENO, my_propmt, largo(my_propmt));
}


/**
 * no_spaces - Free memory.
 * @linea: line splited into tokens
 * Return: No return.
 */

char *no_spaces(char *linea)
{
	char mibuffer[1024];
	char auxiliar[1024];
	int i, j = 0;
	char flag = 't';

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


/**
 *_calloc-function that allocates memory for an array, using malloc
 *@size: size
 *@nmemb: amount of elements
 *
 *Return: Null or other thing
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < nmemb * size; n++)
	{
		p[n] = 0;
	}
	return (p);
}
