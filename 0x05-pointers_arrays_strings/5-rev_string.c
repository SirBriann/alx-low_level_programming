#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - function that prints a string, in reverse
 * @s: Our pointer argument
 * Return: Always (success)
 */
void rev_string(char *s)
{
	char z;
	int i, x, y;

	x = 0;
	y = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	y = x - 1;

	for (i = 0; i < x / 2; i++)
	{
		z = s[i];
		s[i] = s[y];
		s[y--] = z;
	}
}
