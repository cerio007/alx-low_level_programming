#include <stdio.h>

/**
 * main - main block
 * Decription: Print all possible combinations of single-digit numbers.
 * Return: Always 0
 */int main(void)
{
	int z = 0;

	while (z < 10)

		putchar(z + '0');

		if (z < 9)

			putchar(44);
			putchar(32);

			z++;

		putchar('\n');

		return (0);
}
