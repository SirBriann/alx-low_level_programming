#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to POSIX
 * @filename: The poointer to the file
 * @letters: The number of letters it should read and print
 * Return: Returns the count.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = NULL;
	size_t i = 0;
	int ch;


	if (!filename)
	{
		return (0);
	}

	fp = fopen(filename, "r");

	if (!fp)
	{
		return (0);
	}
	ch = fgetc(fp);

	while (ch != EOF && i < letters)
	{
		if (putchar(ch) == EOF)
		{
		fclose(fp);
		i++;

		return (0);
		}
	}
	fclose(fp);

	return (i);
}
