#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints sum of multiples
 *
 * Return: Always (success)
 */
int main(void)
{
	int sum3 = 0;
	int sum5 = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum3 += i;
		}
		else if (i % 5 == 0)
		{
			sum5 += i;
		}
	}
	printf("%d\n", sum3 + sum5);
	return (0);
}

