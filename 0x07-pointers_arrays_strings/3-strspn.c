#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: The string we want to check for a prefix substring
 * @accept: The prefix we are comparing to
 * Return: Always (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, flag;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (count);
		}
	}
	return (count);
}
