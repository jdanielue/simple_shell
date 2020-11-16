#include "holberton.h"
#include <sys/stat.h>


/**
 * main - main of project shell
 *
 * Return: Always 0 on success.
 */

int main(void)
{
	char *my_propmt = "$ ", *linea = NULL, **ptr = NULL;
	const char *delim = " ";
	size_t  largo_linea = 0;
	int i;
	pid_t proces_exce;
	struct stat st;

	while (!0)
	{
		write(STDOUT_FILENO, my_propmt, largo(my_propmt));
		getline(&linea, &largo_linea, stdin);

		for (i = 0; *(linea + i); i++)
		{
			if (*(linea + i) == 10)
				*(linea + i) = 0;
		}

		proces_exce = fork();
		wait();

		ptr = our_strtok(linea, delim);

		if (proces_exce == 0)
		{
		i = 0;
			while (ptr[i])
			{
			printf("%s:", ptr[i]);
			if (stat(ptr[i], &st) == 0)
			{
			execve(ptr[0], ptr, NULL);
			}
			else
			{
			printf("./sh : 1: %s: not found\n", ptr[0]);
			}
			i++;
			}
		}
	}
	free(linea);
	return (0);
}
