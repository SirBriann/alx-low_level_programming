#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: Our argument count
 * @argv: Our Argument vector holding our array of strings
 * Return: Always (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
