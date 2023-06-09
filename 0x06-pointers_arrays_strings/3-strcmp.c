#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strcmp - a function that concatenates two strings
 * @s1: My 1st pointer argument
 * @s2: My second pointer argument
 * Return: Always (success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
