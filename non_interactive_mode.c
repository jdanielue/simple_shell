#include "holberton.h"

/**
 * non_interactive_mode - main of project shell
 * @av: Unused parameter.
 * @env: Allows to obtain the enviroment variables.
 * Return: No return
 */


void non_interactive_mode(char **av, char **env)
{

	char **token_path = 0, **token_line = NULL;
	char *texto, *linea = NULL;
	size_t  largo_linea = 0;
	const char *delim = " ";
	int num_path;

		/*escribe #U#, lee el texto de entrada, cambia ENTER por '\0'*/
		getline(&linea, &largo_linea, stdin);
		ultimonulo(linea);
		texto = buscar_path(env); /*buscar el PATH en **env */
		token_path = our_strtok(texto, ":"); /*TOKENIZA EL PATH*/
		num_path = num_tokens(token_path);/*Cuenta el numero de tokens*/
		token_line = our_strtok(linea, delim); /*TOKENIZA la linea*/
		add_command_path(num_path, token_path, token_line);
		exc_process(token_line, token_path, av, env);
}
