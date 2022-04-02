#include <stdio.h>

/**
* main - Entry point
* Description: print all arguments it receives
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int z;
	for (z = 0; z < argc; z++)
		printf("%s\n", argv[z]);
	return (0);
}
