#include "main.h"
#include <stdio.h>
/**
 * _isalpha - A function that checks for alphabetic character
 * @c: Our parameter for the function
 * Return: Always (success)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
