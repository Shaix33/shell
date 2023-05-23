#include "shell.h"
/**
 * shell_prompt - displays interactive prompt
 *
 * Return: void
 */
void shell_prompt(void)
{
	do {
		write(STDOUT_FILENO, prompt, 13);
