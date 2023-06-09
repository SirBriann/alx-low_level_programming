#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * wildcmp - Compares two strings using recursion
 * @s1: Pointer to the 1st string
 * @s2: Pointer to the second string
 * Return: 1 if same and 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*' && *(s2 + 1) == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 || (*s2 == '*' && *s1 != '\0'))
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
		else
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
	}
	return (0);
}
