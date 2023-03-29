#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strncpy - a function that concatenates two strings
 * @dest: My 1st pointer argument
 * @src: My second pointer argument
 * @n: My third argument n
 * Return: Always (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
