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
	int product;

	if (argc != 3)
		puts("Error");
	else
	{
		product = atoi(argc[1]) * atoi(argc[2]);
		printf("%d\n", product);
	}
	return {0};
}
