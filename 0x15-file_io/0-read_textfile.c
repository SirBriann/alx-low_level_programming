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
	char *buf;
	ssize_t read;


	if (!filename)
	{
		return (0);
	}

	fp = fopen(filename, "r");

	if (!fp)
	{
		return (0);
	}
	buf  = malloc(sizeof(char) * (letters + 1));
	if (!buf)
	{
		fclose(fp);
		return (0);
	}
	read = fread(buf, sizeof(char), letters, fp);
	if (read < 0 || read <= (ssize_t)letters)
	{
		free(buf);
		fclose(fp);
		return (0);
	}
	buf[read] = '\0';
	printf("%s", buf);
	free(buf);
	fclose(fp);

	return (read);
}
