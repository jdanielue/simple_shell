#include "holberton.h"
#include <sys/stat.h>

/**
 * main - main of project shell
 *
 * Return: Always 0 on success.
 */

int main(int ac, char **av, char **env)
{
	char *my_propmt = "#U# ", **token_path, **token_line = NULL, *texto, *linea = NULL;
	size_t  largo_linea = 0;
	const char *delim = " ";
	int i, num_path;
	struct stat st;
	pid_t process_exce, cpid;

	(void)ac;
	(void)av;

	while (!0)
	{
        /*escribe prompt y lee lo que hay en la linea y cambia el enter por '\0' */
		write(STDOUT_FILENO, my_propmt, largo(my_propmt));
		getline(&linea, &largo_linea, stdin);
		ultimonulo(linea);

	texto = buscar_path(env); /*buscar el PATH en **env */
        token_path = our_strtok(texto, ":"); /*TOKENIZA EL  PATH*/
	num_path = num_tokens(token_path);/* Cuenta el numero de tokens */
        token_line = our_strtok(linea, delim); /*TOKENIZA la linea*/

        for (i = 0; i < num_path; i++) /*concatena linea al token*/
        {
        token_path[i] = strcat(token_path[i], "/");
	token_path[i] = strcat(token_path[i], token_line[0]);
        }

	process_exce = fork(); /* crear proceso hijo */

        if (process_exce != 0) /* pedirle al proceso padre que espere */
        wait();

	if (process_exce == 0)
	{
        for (i = 0; token_path[i]; i++)
        {
		if (stat(token_path[i], &st) == 0)
		{
		execve(token_path[i], token_line, NULL);
		}
        }
	}
	printf("%s : 1: %s: not found\n", av[0], token_line[0]);
	}
return (0);
}
