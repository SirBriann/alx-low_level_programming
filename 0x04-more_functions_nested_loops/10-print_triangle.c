#include "main.h"
#include <stdio.h>
/**
 * print_triangle - A function that draws a straight line
 * @size: Our parameter
 * Return: Always (success)
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
