#include <stdio.h>
/**
 * main - Prints all single digits
 *
 * Return: Always (success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		printf("%d", numbers);
	}
	putchar('\n');
	return (0);
}
