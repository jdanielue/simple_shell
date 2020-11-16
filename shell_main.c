#include "holberton.h"

/**
 * main - main of project shell
 *
 * Return: Always 0 on success.
 */

int main(void)
{
	char *my_propmt = "$ ", *linea = NULL, *salida = "exit", **ptr = NULL;
	const char *ejecutable, *ejecutable2, *delim = " ";
	ssize_t car_leidos = 0;
	size_t  largo_linea = 0;
	int contador, i;

	while (!0)
	{
		write(STDOUT_FILENO, my_propmt, largo(my_propmt));
		car_leidos = getline(&linea, &largo_linea, stdin);
		/*
		 *write(STDOUT_FILENO, linea, car_leidos);
		*/

		for (i = 0; *(linea + i); i++)
		{
			if (*(linea + i) == 10)
				*(linea + i) = 0;
		}
		ptr = our_strtok(linea, delim);
		execve(ptr[0], ptr, NULL);
	}
	free(linea);
	return (0);
}
