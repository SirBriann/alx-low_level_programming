#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * strtow - function that splits a string into words.
 * @str: Pointer to our string
 * Return: Returns NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{

	int len;
	char *ptr;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	len = strlen(str);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	ptr[0] = '\0';

	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}

