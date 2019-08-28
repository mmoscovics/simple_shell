#include "holberton.h"

/**
 * read_input - reads input from a stream
 * Return: characters read
 */

char *read_input(void)
{
	char *input_line = NULL;
	size_t bufsize = 0;
	int glnumb;

	glnumb = getline(&input_line, &bufsize, stdin);
	if (glnumb == -1)
		return (NULL);
	return (input_line);
}
