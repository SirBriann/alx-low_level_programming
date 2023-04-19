#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - A funtion that prints a name
 * @name: Pointer to name to be printed
 * @f: Pointer name to function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
