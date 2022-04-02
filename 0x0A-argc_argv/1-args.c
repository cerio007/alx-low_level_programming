#include <stdio.h>

/**
* main - Entry point
* Description: prinys the number of argument passed into it
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (success)
*/

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
