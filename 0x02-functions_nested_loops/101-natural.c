#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints sum of multiples
 *
 * Return: Always (success)
 */
int main(void)
{
	int n = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			n = n + i;
		}
	}
	printf("%d\n", n);
	return (0);
}

