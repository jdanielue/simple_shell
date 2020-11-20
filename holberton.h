#ifndef HOLBERTON_H
#define HOLBERTON_H

#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/* TOOLS_1 */
char  **our_strtok(char *str, const char *delim);

/* TOOLS_2 */
int largo(char *string);
void ultimonulo(char *linea);
char *buscar_path(char **env);
int num_tokens(char **str);

/* TOOLS_3 */
char *our_strcat(char *dest, char *src);
void special_free(char **cartman);

#endif
