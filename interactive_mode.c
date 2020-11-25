#include "holberton.h"



/**
 * interactive_mode - main of project shell
 * @av: Unused parameter.
 * @env: Allows to obtain the enviroment variables.
 * Return: No return
 */


void interactive_mode(char **av, char **env)
{
	char **token_path = 0, **token_line = NULL;
	char *my_propmt = "#U# ", *texto, *linea = NULL;
	size_t  largo_linea = 0;
	const char *delim = " ";
	int num_path;
	ssize_t readline = 0;

signal(SIGINT, handle_sigint);

	while (readline != EOF)
	{
		write(STDOUT_FILENO, my_propmt, largo(my_propmt));
		readline = getline(&linea, &largo_linea, stdin);
		if (readline == EOF)
		{
			write(STDOUT_FILENO, "\n", 1);
			continue;
		}

		if (*linea == 10)
		continue;

		ultimonulo(linea);
		linea = no_spaces(linea);
		texto = buscar_path(env);
		token_path = our_strtok(texto, ":");
		num_path = num_tokens(token_path);
		token_line = our_strtok(linea, delim);
		add_command_path(num_path, token_path, token_line);
		exc_process(token_line, token_path, av, env);
		special_free(token_path);
	}


free(linea);
}
