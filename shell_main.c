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
	int i, num_path;

	(void)ac;

if (!(isatty(STDIN_FILENO)))
	{
		/*escribe #U#, lee el texto de entrada, cambia ENTER por '\0'*/
		getline(&linea, &largo_linea, stdin);
		ultimonulo(linea);

		texto = buscar_path(env); /*buscar el PATH en **env */
		token_path = our_strtok(texto, ":"); /*TOKENIZA EL  PATH*/
		num_path = num_tokens(token_path);/*Cuenta el numero de tokens*/
		token_line = our_strtok(linea, delim); /*TOKENIZA la linea*/

		for (i = 0; i < num_path; i++) /*concatena linea al token*/
		{
		token_path[i] = our_strcat(token_path[i], "/");
		token_path[i] = our_strcat(token_path[i], token_line[0]);
		}

		excecution_process(token_line, token_path, av);
	}
	else
	{
		while (!0)
		{
			/*escribe #U#, lee el texto de entrada, cambia ENTER por '\0'*/
			write(STDOUT_FILENO, my_propmt, largo(my_propmt));
			getline(&linea, &largo_linea, stdin);
			ultimonulo(linea);

			texto = buscar_path(env); /*buscar el PATH en **env */
			token_path = our_strtok(texto, ":"); /*TOKENIZA EL  PATH*/
			num_path = num_tokens(token_path);/*Cuenta el numero de tokens*/
			token_line = our_strtok(linea, delim); /*TOKENIZA la linea*/

			for (i = 0; i < num_path; i++) /*concatena linea al token*/
			{
				token_path[i] = our_strcat(token_path[i], "/");
				token_path[i] = our_strcat(token_path[i], token_line[0]);
			}
			excecution_process(token_line, token_path, av);
		}
	}

special_free(token_line);
free(linea);
return (0);
}
