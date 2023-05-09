#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: Pointer to the file
 * @text_content: Pointer to the content of the text
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp = NULL;

	if (!filename)
	{
		return (-1);
	}

	fp = fopen(filename, "a");

	if (!fp)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fprintf(fp, "%s", text_content);
	}
	fclose(fp);

	return (1);
}
