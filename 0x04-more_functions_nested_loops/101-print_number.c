#include "main.h"
#include <stdio.h>
/**
 * print_number - a function that prints an integer.
 * @n: Our parameter
 * Return: Always (success)
 */
void print_number(int n)
{

	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
	}
	k /= 10;

	if (k != 10)
		print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}
