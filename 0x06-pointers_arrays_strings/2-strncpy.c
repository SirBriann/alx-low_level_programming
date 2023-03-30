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
	int i = 0;
	int j = 0;

	while (src[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)

		dest[i] = src[i];

	for (i = j; i < n; i++)

		dest[i] = '\0';

	return (dest);
}
