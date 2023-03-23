#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - A function that draws a straight line
 * @n: Our parameter
 * Return: Always (success)
 */
void print_diagonal(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
