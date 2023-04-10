#include "main.h"
#include <stdio.h>
/**
 * _islower - A function that checks for lowercase character
 * @c: The character we are checking
 * Return: Always (success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
