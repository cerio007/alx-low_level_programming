#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: a program that multiplies two numbers,
* prints result followed by a new line
* @argc: argument count
* @argv: argument vector
* Return: 0 (success)
*/

int main(int argc, char **argv)
{
	int multiples;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multiples = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiples);
	}
	return (0);
}
