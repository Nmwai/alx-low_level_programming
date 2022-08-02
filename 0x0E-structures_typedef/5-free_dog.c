#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - Entry Point
 * @d: struct to free
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
