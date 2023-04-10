#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _memset - A function that fills memory with a constant byte.
 * @s: The pointer to the memory
 * @b: The value to be copied
 * @n: The number of bytes in the memory block
 * Return: Always (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
