#ifndef HOLBERTON_H
#define HOLBERTON_H

#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

void exc_process(char **token_line, char **token_path, char **av, char **env);

/* TOOLS_1 */
char  **our_strtok(char *str, const char *delim);
int count_words(char *str, char *delim);

/* TOOLS_2 */
int largo(char *string);
void ultimonulo(char *linea);
char *buscar_path(char **env);
int num_tokens(char **str);

/* TOOLS_3 */
char *our_strcat(char *dest, char *src);
void special_free(char **cartman);
void add_command_path(int num_path, char **token_path, char **token_line);

/* TOOLS_5 */
void handle_sigint(int sig);
char *no_spaces(char *linea);
void *_calloc(unsigned int nmemb, unsigned int size);
#endif
