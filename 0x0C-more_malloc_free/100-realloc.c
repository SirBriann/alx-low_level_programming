#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previosly allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: Returns the reallocated pointer to memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		return (malloc(new_size));
	}

	ptr1 = realloc(ptr, new_size);

	if (!ptr1)
	{
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		memcpy(ptr1, ptr, old_size);
	}
	free(ptr);

	return (ptr1);
}


