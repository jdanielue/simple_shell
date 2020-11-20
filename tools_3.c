#include "holberton.h"

/**
 * _strcat - Concatenate 2 strings
 * @dest: First string
 * @src: Second string.
 * Return: Concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int counter, iter;

	for (counter = 0; dest[counter]; counter++)
	{}
	for (iter = 0; src[iter]; iter++)
	{
		dest[counter + iter] = src[iter];
	}
	return (dest);
}

/**
 * special_free - Free memory.
 * @cartman: Pointer to be freeded.
 * Return: No return.
 */

void special_free(char **cartman)
{
	int i;

	for (i = 0; *(cartman + i); i++)
	{
		free(*(cartman + i));
	}
	free(cartman);
}
