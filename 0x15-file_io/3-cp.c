#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - program that copies the content of a file to another file.
 * @argc: Counter
 * @argv: Argument vector
 * Return: Returns the content of the new file
 */
int main(int argc, char *argv[])
{
	FILE *file_from = NULL;
	FILE *file_to = NULL;
	char buffer[1024];
	size_t n;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = fopen(argv[1], "r");

	if (!file_from)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = fopen(argv[2], "w");

	if (!file_to)
	{
		fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((n = fread(buffer, 1, sizeof(buffer), file_from)) > 0)
	{
		if (fwrite(buffer, 1, n, file_to) != n)
		{
			fprintf(stderr, "Error: Can't writer to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (fclose(file_from) != 0 || fclose(file_to) != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n",
			(fileno(file_from) != 0) ? fileno(file_from) :
		       (fileno(file_to)));
		exit(100);
	}
	return (0);
}





