#include "main.h"
#include <stdio.h>
/**
 * print_line - A function that draws a straight line
 * @n: Our parameter
 * Return: Always (success)
 */
void print_line(int n)
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
			_putchar('_');
		}
		_putchar('\n');
	}
}
