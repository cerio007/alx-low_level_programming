#include <stdio.h>

/**
* main - Entry point
* Description: Print its name followed by a new line
* @argc: agrument count
* @argv: argument vector
* Return: Always 0
*/

int main (int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
