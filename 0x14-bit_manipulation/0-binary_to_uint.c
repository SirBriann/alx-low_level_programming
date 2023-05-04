#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 characters
 * Return: Return the converted num, 0 in all chars, NULL iif b is zero
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin_num = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			bin_num = (bin_num << 1) | (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (bin_num);
}
