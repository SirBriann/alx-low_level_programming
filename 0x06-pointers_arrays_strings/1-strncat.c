#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: My 1st pointer argument
 * @src: My second pointer argument
 * Return: Always (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t len = strlen(dest);
	size_t i;

	for (i = 0; n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
		dest[len + i] = '\0';
	}
	return (dest);
}
