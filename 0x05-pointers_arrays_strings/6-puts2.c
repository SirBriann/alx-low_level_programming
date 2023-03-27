#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - function that prints a string, in reverse
 * @str: Our pointer argument
 * Return: Always (success)
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar('\n');
	}
}
