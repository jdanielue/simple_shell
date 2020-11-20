#include "holberton.h"

/**
 * _strcat - Concatenate 2 strings
 * @dest: First string
 * @src: Second string.
 * Return: Concatenated string.
 */

char *our_strcat(char *dest, char *src)
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
