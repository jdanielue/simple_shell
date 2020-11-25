#include "holberton.h"

/**
 * main - main of project shell
 * @av: Unused parameter.
 * @ac: Argument count.
 * @env: Allows to obtain the enviroment variables.
 * Return: No return
 */

int main(int __attribute__((unused)) ac, char  **av, char **env)
{
	if (!(isatty(STDIN_FILENO)))
		non_interactive_mode(av, env);
	else
		interactive_mode(av, env);
	return (0);
}
