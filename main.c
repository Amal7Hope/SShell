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
	(void)line;
	(void)ac;
	(void)argv;


	while(1)
	 {
		write(STDOUT_FILENO, "$ ", 2);

		line = get_line();

	 }
}
