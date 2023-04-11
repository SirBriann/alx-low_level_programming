#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: Pointer to our new string
 * Return: Returns NULL if str = NULL, returns NULL if insufficient memory
 */
char *_strdup(char *str)
{
	size_t i, len;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	ptr = (char *)malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}

	ptr[i] = '\0';

	return (ptr);
}



