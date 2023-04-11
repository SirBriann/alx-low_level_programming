#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: Pointer to our 1st string
 * @s2: Pointer to our second string
 * Return: Return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t i, len1, len2;
	char *k;
	char *ptr;


	if (!s1 || !s2)
	{
		s1 = "";
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	k = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (k == NULL)
	{
		return (NULL);
	}
	strcpy(k, s1);
	strcat(k, s2);

	ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1 + len2; i++)
	{
		ptr[i] = k[i];
	}

	ptr[i] = '\0';

	return (ptr);
}



