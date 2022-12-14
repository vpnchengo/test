#include "main.h"
#include <unistd.h>

/**
 * prompt - A function that prints the prompt
 * Return: Nothing.
 */

void prompt(void)
{
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "Hell_Shell>> ", 13);
}
