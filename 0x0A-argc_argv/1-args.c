#include <stdio.h>

/**
 * main - A function that prints its name, followed by a new line.
 * @argc: Our argument counter
 * @argv: Our array list
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%i\n", argc - 1);

	return (0);
}
