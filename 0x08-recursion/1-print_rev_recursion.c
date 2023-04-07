#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: The poiter pointing to the string
 * Return: Always (success)
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
	_print_rev_recursion(s + 1);
	printf("%c", *s);
	}
}
