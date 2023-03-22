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

		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 0; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				k = i * j;

				if (k <= 99)
					_putchar(' ');

				if (k < 9)
					_putchar(' ');

				if (k >= 100)
				{
					_putchar((k / 100) + '0');
					_putchar((k / 10) % 10 + '0');
				}

				else if (k  <= 99 && k >= 100)
				{
					_putchar((k / 10) + '0');
				}
				_putchar((k % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
