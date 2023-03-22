#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: The parameter that takes the digit value
 * Return: Always (success)
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
	{
		last = last * (-1);
	}
	_putchar(last + '0');
	return (last);
}
