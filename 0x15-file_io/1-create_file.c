#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "main.h"
/**
 * create_file - A function that creates a file.
 * @filename: Pointer to the file if it exist
 * @text_content: Pointer to context of the file
 * Return: 1 on success, -1 on failure (file can not be created
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp = NULL;
	size_t len;

	if (!filename)
	{
		return (-1);
	}

	fp = fopen(filename, "w+");
	if (!fp)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		if (fwrite(text_content, sizeof(char), len, fp) != len)
		{
			fclose(fp);
			return (-1);
		}

	}
	fclose(fp);

	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		return (-1);
	}
	return (1);
}


