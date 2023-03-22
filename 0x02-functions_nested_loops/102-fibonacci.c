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
	int first = 1;
	int second = 2;
	int next = first + second;

	printf("%d, ", first);
	printf("%d, ", second);

	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%d \n", next);
		}
		else
		{
			printf("%d, ", next);
		}

		first = second;
		second = next;
	}
	return (0);
}

