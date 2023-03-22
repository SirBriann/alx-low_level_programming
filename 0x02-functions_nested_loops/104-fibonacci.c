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

	int first = 1, second = 2;
	int next = first + second;

	printf("%ld, ", first);
	printf("%ld, ", second);

	while (count <= 98)
	{
		if (count == 98)
		{
			printf("%ld\n", next);
		}
		else
		{
			printf("%ld, ", next);
		}

		first = second;
		second = next;

		next = first + second;
		count++;
	}

	return (0);
}

