#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: Always (success)
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);

	}
	putchar('\n');
	return (0);
}
