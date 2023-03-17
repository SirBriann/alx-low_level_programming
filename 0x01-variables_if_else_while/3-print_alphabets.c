#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints lowercase and then upper case
 *
 * Return: Always (success)
 */
int main(void)
{
	char alphabet1;

	for (alphabet1 = 'a'; alphabet1 <= 'z'; alphabet1++)
	{
		putchar(alphabet1);
	}
	for (alphabet1 = 'A'; alphabet1 <= 'Z'; alphabet1++)
	{
		putchar(alphabet1);
	}
	putchar('\n');
	return (0);
}
