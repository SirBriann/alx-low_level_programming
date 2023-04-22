#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
/**
 * print_all - A function that prints anything.
 * @format: List of all types of arguments passed to the function
 * Return: Returns Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char *sep = "";
	int i = 0;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep,  va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						printf("(nil)");
					else
						printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	va_end(args);

	printf("\n");
}
