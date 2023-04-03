#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _memcpy - A function that copies memory area.
 * @dest: The pointer to where memory is to be copied to
 * @src: Pointer to where memory is to be copied from
 * @n: The number of bytes to be copied
 * Return: Always (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
