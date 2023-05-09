#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/stat.h>

#define BUF_SIZE 1024
/**
 * main - program that copies the content of a file to another file.
 * @argc: Counter
 * @argv: Argument vector
 * Return: Returns the content of the new file
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	char buf[BUF_SIZE];
	int n;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((n = read(file_from, buf, BUF_SIZE)) > 0)
	{
		if (write(file_to, buf, n) != n)
		{
			dprintf(STDERR_FILENO, "Error: Can't writer to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Erro: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			(file_from != -1) ? file_from : file_to);
		exit(100);
	}
	if (chmod(argv[2], mode) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't set file permission for %s\n", argv[2]);
		exit(101);
	}
	return (0);
}
