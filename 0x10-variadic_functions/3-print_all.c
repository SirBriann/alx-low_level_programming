#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
/**
 * print_all - A function that prints anything.
 * @: Pointer to a string
 * @format: List of all types of arguments passed to the function
 * Return: Returns Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char c;
	int i = 0;

	va_start(args, format);


	while (format && format[i])
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				break;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(args);
}
