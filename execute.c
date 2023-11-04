#include "main.h"
/**
 * execute - a function
 * @splited_command: command
 * @argv: ssh's name
 * Return: status
 */

int execute(char **splited_command, char **argv)
{
	int status;
	pid_t child;

	child = fork();
	if (child == 0)
	{
		if (execve(splited_command[0], splited_command, environ) == -1)
		{
			perror(argv[0]);
			free(splited_command);
		}
	}
	else
	{
		waitpid(child, &status, 0);
		free(splited_command);
	}
	return (WEXITSTATUS(status));
}
