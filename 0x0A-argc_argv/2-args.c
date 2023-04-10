#include <stdio.h>

/**
 * main - A function that prints its name, followed by a new line.
 * @argc: Our argument counter
 * @argv: Our array list
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
