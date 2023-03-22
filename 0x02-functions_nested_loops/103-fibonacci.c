#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int exc = 4e6;
	unsigned int curr = 2;
	unsigned int prev = 1;
	unsigned int next;
	unsigned int total = 0;

	while (curr < exc)
	{
		if (curr % 2 == 0)
		{
			total += curr;

			next = prev + curr;
			prev = curr;
			curr = next;
		}
	}
	printf("%d\n", total);
	return (0);
}
