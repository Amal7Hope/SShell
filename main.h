#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

char *get_line(void);
char **spliter(char *line);
char *_strdup(const char *str);
int execute(char **splited_command, char **argv);

extern char **environ;

#endif
