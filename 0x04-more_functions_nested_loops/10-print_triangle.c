#include "main.h"
#include <stdio.h>
/**
 * print_triangle - A function that draws a straight line
 * @size: Our parameter
 * Return: Always (success)
 */
void print_triangle(int size)
{
	int m, k, l;

	m = 0;
	k = size - 1;

	while (m < size)
	{
		k = size - 1 - m;
		l = m + 1;
		while (k > 0)
		{
			_putchar(' ');
			k--;
		}

		while (l > 0)
		{
			_putchar(35);
			l--;
		}
		_putchar('\n');
		m++;
	}
}
