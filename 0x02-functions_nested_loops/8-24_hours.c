#include "main.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * jack_bauer - function that prints every minute of the day
 *
 * Return: Always (success)
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(58);
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}
