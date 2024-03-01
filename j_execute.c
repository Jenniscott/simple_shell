#include "main.h"
/**
 * j_execute - executes the function of the prompt
 * @command: string input
 *
 * Description: uses j_execute
 *
 * Return - 0
 **/

void j_execute(const char *command)
{
	pid_t child_pid = fork()

	if (child_pid == -1)
{
	j_pt("Error forking process.\n");
	exit(EXIT_FAILURE);
}
	else if (child_pid == 0)
{
	char *args[128];
	int arg_count = 0;

	char *token = strtok((char *)command, " ");
}
	while (token != NULL)
{
	args[arg_count++] = token;
	token = strtok(NULL, " ");
}
	args[arg_count] = NULL;

	execve(args[0], args, NULL);

	j_pt("Error executing command.\n");
	exit(EXIT_FAILURE);
	
	else()

{

	wait(NULL);
}
