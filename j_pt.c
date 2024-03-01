#include "main.h"
/**
 * j_pt - my own print function
 * @string: input
 * Description: using j_pt, this functios print
 * Return: 0
 **/

void j_pt(const char *string)
{
	write(STDOUT_FILENO, string, strlen(string));
}
