#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/*Variable declarations*/
int buffsize = 64, x = 0;
char *cmd = NULL, *cmd_copy = NULL, *token, *prompt = "$ ", delimeter = "\t\n";
size_t buffer = 0;

char split_args(char *cmd);
char read_args(void);

#endif
