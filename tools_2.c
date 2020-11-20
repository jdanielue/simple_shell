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

/**
 * ultimonulo - function that change the last character (enter for null)
 *@linea: string that going to be measure
 * Return: zero.
 */

void ultimonulo(char *linea)
{
	int i;

	for (i = 0; *(linea + i); i++)
	{
	if (*(linea + i) == 10)
		*(linea + i) = 0;
	}
}

/**
 * buscar_path - function that find the path and storage  in a double pointer
 *@env: environment
 * Return: zero.
 */

	 char *buscar_path(char **env)
{
	char *texto = NULL;
	int i;

	for (i = 0; env[i] != NULL; i++)
	{
		if (strncmp("PATH", env[i], 4) == 0)
			{
			texto = env[i];
			}
	}
	/*elimina la palabra PATH del PATH*/
	i = 0;

	for (i = 0; texto[i] != '\0'; i++)
	{
		texto[i] = texto[i + 5];
	}
	return (texto);
}

/**
 * num_tokens - function that find the path and storage in a double pointer
 *@str: string that going to be measure
 * Return: zero.
 */

int num_tokens(char **str)
{
	int num_path;

	for (num_path = 0; str[num_path] != NULL; num_path++)
	;
	return (num_path);
}
