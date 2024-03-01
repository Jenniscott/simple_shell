#include "main.h"
/**
 * main - prints
 * Description: description
 *
 * Return - 0
 *
 **/

int main(void)
{
	char command[120];

	while (true)
{
	j_display();
	j_read(command, sizeof(command));
	j_execute(command);
}
}
