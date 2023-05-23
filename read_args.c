#include "shell.h"
/**
 * read_args - reads arguments from stdin
 *
 * Return: pointer to string
 */
char *read_args(void)
{
	if (getline(&cmd, &buf, stdin) == -1)
	{
		if (feof(stdin))
		{
			free(cmd);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(cmd);
			perror("error reading input");
			exit(EXIT_FAILURE);
		}
	}
	return (cmd);
}
