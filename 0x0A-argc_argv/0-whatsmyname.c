#include <stdio.h>

/**
* main - Entry point
* Description: a program that print its name followed by a new line
* @argc: argument count
* @argv: agrument vector
* Return: Always 0
*/

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
