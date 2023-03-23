#include "main.h"
#include <stdio.h>
/**
 * print_numbers - A function that prints the numbers, from 0 to 9
 *
 * Return: Always (success)
 */
void print_numbers(void)
{
	
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
