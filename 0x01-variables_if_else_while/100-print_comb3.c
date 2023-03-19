#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints all possible different combinations
 *
 * Return: Always (success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m < 10; m++)
		{

			putchar(n + '0');
			putchar(m + '0');

			if (n == 8 && m == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
