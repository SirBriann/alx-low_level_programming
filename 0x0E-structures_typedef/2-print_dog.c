#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog -  a function that prints a struct dog
 * @d: Pointer to our dog funtion
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (!d)
	{ 
		return;
	}
	else 
	{
		printf("Name: %s\n", (d == NULL) ? "nill" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d == NULL) ? "nill" : d->owner);
	}
}
