#include "main.h"

/**
 * get_line - function that read the input
 * Return: line if success or NULL in fail
 */

char *get_line(void)
{

	char *line = NULL;
	size_t size = 0;
	int nread;

	nread = getline(&line, &size, stdin);

	if (nread == -1)
	{
		free(line);
		exit(0);
	}

	return (line);
}
