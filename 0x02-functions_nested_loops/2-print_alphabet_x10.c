#include "main.h"
#include <stdio.h>
/**
 * main -  prints 10 times the alphabet, in lowercase, followed by a new line
 * Description: Print alphabets 10 times
 * Return: Always (success)
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
