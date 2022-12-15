#include "shell.h"

/**
 * func_printenv - prints the current environment
 * @environ: environment variable
 */
void print_env(char **environ)
{
	int i = 0;

	for (; environ[i] ; i++)
		_puts(environ[i]); /*print the whole environment*/
}
