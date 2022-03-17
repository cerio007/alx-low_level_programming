#include "main.h"

/**
* main - multiplies two integers
* Return: Always 0
*/

int mul(int a, int b)
{
	int i, j, k;

	printf("Multiplying two integers: \n");

	scanf("%d %d", &i, &j);

	k = i * j;

	printf("k = %d", k);

	return (0);
}
