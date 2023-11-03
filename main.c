#include "main.h"

/**
 * main - the main function
 * @ac: ac
 * @argv: argv
 * Return: 0 or command
 */
int main(int ac, char **argv)
{

	char *line;
	char **splited_command = NULL;
	(void)line;
	(void)ac;
	(void)argv;


	while (1)
	{
		if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

		line = get_line();

		splited_command = spliter(line);

		if (!splited_command)
			continue;



	}
}
