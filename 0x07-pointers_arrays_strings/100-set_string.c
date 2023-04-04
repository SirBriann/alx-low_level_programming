#include <stdlib.h>
#include <stdio.h>
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: DOuble pointer that stores the address of the string
 * @to: pointer pointing to the string that we want to set s to
 * Return: Always (success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
