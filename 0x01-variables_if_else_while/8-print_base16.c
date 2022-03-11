#include <stdio.h>

/**
 * main - main block
 * Description: Print all numbers of baseeeee 16 in lowercase.
 * Return: Always 0
 */
int main(void)
{
	char c;
	int z;

	for (z = 0; z < 10; z++)

		putchar(z + '0');

	for (c = 'a'; c < 'g'; c++)

		putchar(c);

	putchar('\n');

	return(0);
}
