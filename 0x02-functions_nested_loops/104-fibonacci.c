#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints the first 50 Fibonacci numbers
 *
 * Return: Always (success)
 */
int main(void)
{
	int count = 3;

	unsigned long int first = 1, second = 2;
	unsigned long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (count <= 98)
	{
		if (count == 98)
		{
			printf("%lu\n", next);
		}
		else
		{
			printf("%lu, ", next);
		}

		first = second;
		second = next;

		next = first + second;
		count++;
	}

	return (0);
}

