#include "holberton.h"

/**
 * handle_sigint - Free memory.
 * @a: line splited into tokens
 * Return: No return.
 */

void handle_sigint(int __attribute__((unused)) a)
{
	char *my_propmt = "#U# ";

	write(STDIN_FILENO, "\n", 1);
	write(STDOUT_FILENO, my_propmt, largo(my_propmt));
}
