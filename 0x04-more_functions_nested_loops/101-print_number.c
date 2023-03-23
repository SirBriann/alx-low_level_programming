#include "main.h"
#include <stdio.h>
/**
 * print_number - a function that prints an integer.
 * @n: Our parameter
 * Return: Always (success)
 */
void print_number(int n)
{

	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
