#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * puts_half - function that prints half of a string
 * @str: Pointer arguments
 * Return: Always (success)
 */
void puts_half(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i++)
	{
		if (!str[i] % 2 == 1)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
