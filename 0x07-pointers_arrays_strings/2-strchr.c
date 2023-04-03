#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: The string to be scanned
 * @c: The character to be searched for in the string
 * Return: Always (success)
 */
char *_strchr(char *s, char c)
{
	size_t i;
	int len = strlen(s);

	for (i = 0; len; i++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
