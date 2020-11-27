### In this REPO we make our own mini-version of a linux SHELL as part of the final first quarter project at Holberton School.  :muscle:
#
## -Installation:
Git clone https://github.com/jdanielue/simple_shell.git
#
## -Execution:
gcc -Wall -Werror -Wextra -pedantic *.c -o shell
#
## MORE ABUOT PROJECT
#
## Requirements:
Basically the requirements of the prject were:
#
-Use gcc 4.8.4

-Use the flags -Wall -Werror -Wextra -pedantic

-Take into acount the indentation.

-Don't have memory leaks.

-No more than 40 lines per function.

-No more than 5 functions per file.
#
## TOOLS:
#
## tools_1.c
-our_strtok: The funcion works similar to the strtok() function
#
## tools_2.c
-largo: Count the length of a string.

-ultimonulo: Puts NULL at the end of a string.

-buscar_path: Find the PATH variable.

## EXAMPLES:

## Interactive mode
	`ls -a`

	   `AUTHORS               .git         hsh                 man_1_simple_shell      README.md     tools_1.c`  `tools_3.c  tools_5.c
	`..  excecution_process.c  holberton.h  interactive_mode.c  non_interactive_mode.c  shell_main.c  tools_2.c`  `tools_4.c`

## Non Interactive mode
	`echo "ls -a" | ./hsh`

	   `AUTHORS               .git         hsh                 man_1_simple_shell      README.md     tools_1.c`  `tools_3.c  tools_5.c
	`..  excecution_process.c  holberton.h  interactive_mode.c  non_interactive_mode.c  shell_main.c  tools_2.c`  `tools_4.c`

## FLOWCHART:

Here you can find the flowchart for the Shell Project

![alt text](https://ibb.co/wNt2Fbz)

#
#
##### Autors:
**Daniel Urrego Escobar**
Holberton Student MED -COL
**Sergio Urrego**
Holberton Student MED -COL
