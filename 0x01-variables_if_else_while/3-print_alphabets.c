#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints lowercase and then upper case
 *
 * Return: Always (success)
 */
int main(void)
{
	char alphabet1 = 'a';
	char alphabet2 = 'A';

	if (alphabet1 <= 'z')
	{
		putchar(alphabet1);
	}
	else if (alphabet2 <= 'Z')
	{
		putchar(alphabet2);
	}
	putchar('\n');
	return (0);
}
