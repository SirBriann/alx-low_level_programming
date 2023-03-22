#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table
 * @n: Our Parameter
 * Return: Always (success)
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 && n < 0)
	{
		_putchar('0');

		for (i = 0; i <= n; i++)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');

		for (j = 0; j <= n; j++)
		{
			k = i * j;

			_putchar(k + '0');
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
	}
}

