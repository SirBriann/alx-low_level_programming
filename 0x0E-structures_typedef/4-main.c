#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog = my_dog = new_dog("Poppy", 3.5, "Bob");
	char *s = my_dog->name;
	float a = my_dog->age;

	printf("My name is %s, and I am %.1f :) - Woof!\n", s, a);
	return (0);
}
