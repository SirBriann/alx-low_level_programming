#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: one of the variable arguments
 * Return: Returns the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, arg;
	size_t i;

	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		sum += arg;
	}
	va_end(args);

	return (sum);
}


