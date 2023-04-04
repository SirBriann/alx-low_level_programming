#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: The string we are searching
 * @accept: The string containing what we need to see if it's matched
 * Return: Always (success)
 */
char *_strpbrk(char *s, char *accept)
{
	size_t i, j, flag;

	flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{

				flag = 1;
				break;
			}
		}
		if (flag)
		{
			return (char *)(s + i);
		}
	}
	return (NULL);
}

