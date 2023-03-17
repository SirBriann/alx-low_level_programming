#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always (success)
 */
int main(void)
{
	int alphs;

	for (alphs = 'z'; alphs >= 'a'; alphs--)
	{
		putchar(alphs);
	}
	putchar('\n');
	return (0);
}
