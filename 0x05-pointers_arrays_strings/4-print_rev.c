#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_rev - function that prints a string, in reverse
 * @s: Our pointer argument
 * Return: Always (success)
 */
void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; i > 0; i--)	
	{
		printf("%s\n", s[i]);
	}
	printf("\n");
}
