#include "main.h"
#include <stdio.h>
/**
 * _isdigit - A function that checks for uppercase character
 * @c: Our Parameter
 * Return: Always (success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}

