#include "main.h"

int main(int ac, char *argv[])
{
	char *prompt = "Ashell$";
	char *lineptr;
	size_t n;

	printf("%s\n", prompt);

	getline(&lineptr, &n, stdin);
	printf("%s\n", lineptr);

	free(lineptr);
	return (0);
}
