#include "holberton.h"

/**
 * largo - function that return size of a string
 *@string: string that going to be measure
 * Return: int size of string.
 */

int largo(char *string)
{
	int cont_car;

	for (cont_car = 0; *(string + cont_car) != '\0'; cont_car++)
	;
return (cont_car);
}
