
/*
 * File: 5-free_dog.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that frees dogs.
 *@d: Pointer to struture.
 *
 * Return: void.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free(d->owner);
		free(d);
	}
}
