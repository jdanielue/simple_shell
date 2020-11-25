#include "holberton.h"

/**
 * main - main of project shell
 * @ac: Unused parameter.
 * @av: Unused parameter.
 * @env: Allows to obtain the enviroment variables.
 * Return: Always 0 on success.
 */

int main(int __attribute__((unused)) ac, char **av, char **env)
{

	if (!(isatty(STDIN_FILENO)))
		non_interactive_mode(av, env);
	else
		interactive_mode(av, env);
return (0);
}
