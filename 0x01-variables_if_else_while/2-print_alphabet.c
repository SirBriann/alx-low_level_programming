#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints all lower case alphas
 *
 * Return: Always (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
