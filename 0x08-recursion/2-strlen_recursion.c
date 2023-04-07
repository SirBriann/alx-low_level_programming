#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: Pointer to our string
 * Return: Always (success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
