#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator:  String to be printed between the strings
 * @n: The number of strings passed to the function
 * Return: Returns the strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	size_t i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("nil");
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
