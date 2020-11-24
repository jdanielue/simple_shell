#include "holberton.h"
#include <sys/stat.h>

/**
 * main - main of project shell
 * @ac: Unused parameter.
 * @av: Unused parameter.
 * @env: Allows to obtain the enviroment variables.
 * Return: Always 0 on success.
 */

int main(int __attribute__((unused)) ac, char **av, char **env)
{
	char **token_path, **token_line = NULL;
	char *my_propmt = "#U# ", *texto, *linea = NULL;
	size_t  largo_linea = 0;
	const char *delim = " ";
	int num_path;
	ssize_t readline = 0;

if (!(isatty(STDIN_FILENO)))
	{
		/*escribe #U#, lee el texto de entrada, cambia ENTER por '\0'*/
		getline(&linea, &largo_linea, stdin);
		ultimonulo(linea);

		texto = buscar_path(env); /*buscar el PATH en **env */
		token_path = our_strtok(texto, ":"); /*TOKENIZA EL PATH*/
		num_path = num_tokens(token_path);/*Cuenta el numero de tokens*/
		token_line = our_strtok(linea, delim); /*TOKENIZA la linea*/
		add_command_path(num_path, token_path, token_line);
		excecution_process(token_line, token_path, av);
	}
	else
	{
		signal(SIGINT, handle_sigint);
		while (readline != EOF)
		{
			/*escribe #U#, lee el texto de entrada, cambia ENTER por '\0'*/
			write(STDOUT_FILENO, my_propmt, largo(my_propmt));
			readline = getline(&linea, &largo_linea, stdin);
			if (readline == EOF)
			{
				write(STDOUT_FILENO, "\n", 1);
				continue;
			}
			ultimonulo(linea);
			linea = no_spaces(linea);

			texto = buscar_path(env); /*buscar el PATH en **env */
			token_path = our_strtok(texto, ":"); /*TOKENIZA EL PATH*/
			num_path = num_tokens(token_path);/*Cuenta el numero de tokens*/
			token_line = our_strtok(linea, delim); /*TOKENIZA la linea*/
			add_command_path(num_path, token_path, token_line);
			excecution_process(token_line, token_path, av);

			/*for (i = 0; token_line[i] != '\0'; i++)
				{
					printf("token_line[%d] : %s",i , token_line[i]);
				}*/
		}
	}
free(linea);
return (0);
}
