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
 * remove spaces - Free memory.
 * @a: line splited into tokens
 * Return: No return.
 */

char *no_spaces(char *linea)
{
	char mibuffer[1024];
	char auxiliar[1024];
	int i, j = 0;

	for(i = 0; linea[i] != '\0'; i++)
	{
		if (linea[i] == ' ' && linea[i + 1] == ' ' )
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
		for(i = 0; mibuffer[i] != '\0'; i++)
		{
			auxiliar[i] = mibuffer[i + 1];
			linea[i] = auxiliar[i];
		}
	}

	return (linea);
}
