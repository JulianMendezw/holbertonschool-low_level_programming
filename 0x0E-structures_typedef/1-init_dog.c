/*
 * File: 1-init_dog.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - a function that initialize a variable of type struct dog.
 *@d: Pointer to struture.
 *@name: Pointer to dog's name.
 *@age: Pointer to dog's age.
 *@owner: Pointer to dog's owner name.
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
