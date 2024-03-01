#include "main.h"
/**
 * j_read - reads command
 * @command: input
 * @size: size of command
 *
 * Description: uses command
 * Result - 0
 **/

void j_read(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
{
	if (feof(stdin))
{
	j_pt("\n");
		exit(EXIT_SUCCESS);
}
	else
{
	j_pt("Error while reading input.\n");
		exit(EXIT_FAILURE);
}
}
	command[strcspn(command, "\n")] = '\0';
}
