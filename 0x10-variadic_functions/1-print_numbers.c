#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_numbers -  a function that prints numbers, followed by a new line.
 * @separator: Pointer to the string to be printed between numbers
 * @n: The number of integers passed to the function
 * Return: The numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int nums;
	size_t i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		nums = va_arg(args, int);
		printf("%d", nums);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
