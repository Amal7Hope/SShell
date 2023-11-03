#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *get_line(void);
char **spliter(char *line);
char *_strdup(const char *str);

#endif
