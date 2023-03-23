#include "main.h"
#include <stdio.h>
/**
 * print_square - A function that draws a straight line
 * @size: Our parameter
 * Return: Always (success)
 */
void print_square(int size)
{
	int m, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= size; m++)
		{
			for (k = 0; k <= size; k++)
			{
				_putchar(35);
			}
				_putchar('\n');
		}
	}
}
