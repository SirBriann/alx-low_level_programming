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

	for (i = strlen(str) / 2; i < strlen(str); i++)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}
