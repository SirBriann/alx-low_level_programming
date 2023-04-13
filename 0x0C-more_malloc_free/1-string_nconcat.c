#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string to be appended to
 * @s2: string appended
 * @n: sttring size
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j;
	char *str;
	size_t len1, len2;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	str = (char *)calloc(n + len1 + 1, sizeof(char));

	if (!str)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		{
			str[i] = s1[i];
		}
	for (j = 0; j < len2; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';

	return (str);
}


