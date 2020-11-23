#include "holberton.h"
#include <sys/stat.h>

/**
 * excecution_process - Free memory.
 * @token_line: line splited into tokens
 * @token_path: path splited into tokens
 * @av:excecutable file argument
 * Return: No return.
 */

void excecution_process(char **token_line, char **token_path, char **av)
{
	int i = 0;
	pid_t process_exce;
	struct stat st;

	if (stat(token_line[0], &st) == 0)
	{
		process_exce = fork();
		wait(NULL);
		if (process_exce == 0)
		{
			execve(token_line[0], token_line, NULL);
		}
		printf("%s : 1: %s: not found\n", av[0], token_line[0]);
	}


	else if (!(stat(token_line[0], &st) == 0))
	{
	process_exce = fork();
	wait(NULL);

		if (process_exce == 0)
		{
		for (i = 0; token_path[i]; i++)
		{
			if (stat(token_path[i], &st) == 0)
			{
			execve(token_path[i], token_line, NULL);
			}
		}
		printf("%s : 1: %s: not found\n", av[0], token_line[0]);
			exit (127);
		}
	}
}
