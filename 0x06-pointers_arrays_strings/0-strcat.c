#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strcat - A function that concatenates two strings
 * @dest: Our first pointer argument
 * @src: Our second pointer argument
 * Return: Always (success)
 */
void *_strcat(char *dest, char *src)
{
	size_t i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; dest[j] != '\0'; j++, i++)
		{
			src[i] = dest[j];
		}
		src[i] = '\0';
	}
	return (dest);
}
