#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: 1st pointer
 * @src: 2nd pointer
 * Return: Always (success)
 */
char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; i < 98; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		strncpy(dest, src, 98);
	}

	return (dest);
}
