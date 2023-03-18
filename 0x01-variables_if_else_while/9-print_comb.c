#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always (success)
 */
int main(void)
{
	int dgts;

	for (dgts = 0; dgts < 10; dgts++)
	{
		putchar (dgts + '0');
		if (dgts < 9)
		{
		putchar (',');
		putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
