#include <stdio>

/**
 * main - main block
 * Description: Print all single digits of base 10 starting from 0.
 * Return: Always 0
 */
int main(void)
{
	int z;

	for (z = 0; z < 10; z++)

		putchar(z + '0');

	putchar('\n');

	return (0);
}
