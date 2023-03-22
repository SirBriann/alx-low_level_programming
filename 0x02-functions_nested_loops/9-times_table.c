#include "main.h"
#include <stdio.h>
/**
 * times_table - A function that prints the 9 times table
 *
 * Return: Always (success)
 */
void times_table(void)
{
	int a, b, u;

	for (a = 0; a <= 9; a++)
	{

		for (b = 0; b <= 9; b++)
		{
			u = a * b;

			_putchar(',');
			_putchar(' ');

			if (u <= 9)

				_putchar(',');

			else
				_putchar((u / 10) + '0');
			_putchar((u % 10) + '0');


		}
		_putchar('\n');
	}
}
