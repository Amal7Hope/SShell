#include "main.h"

/**
 * spliter - function
 * @line: the line
 * Return: command
 */

char **spliter(char *line)
{

	char *token = NULL;
	char *copy_line = NULL;
	char **splited_command = NULL;
	int counter = 0, i = 0;

	copy_line = _strdup(line);


	token = strtok(copy_line, " \n\t");

	if (token == NULL)
	{
		return (NULL);
	}

	while (token)
	{
		counter++;
		token = strtok(NULL, " \n\t");
	}
	free(copy_line), copy_line = NULL;

	splited_command = malloc(sizeof(char *) * (counter + 1));
	if (!splited_command)
	{
		free(line);
		return (NULL);
	}
	token = strtok(line, " \n\t");
	while (token)
	{
		splited_command[i] = _strdup(token);
		token = strtok(NULL, " \n\t");
		i++;
	}
	free(line), line = NULL;
	splited_command[i] = NULL;
	return (splited_command);
}
