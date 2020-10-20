/*
 * File: 2-print_dog.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog.
 *@d: Pointer to struture.
 *
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
		printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age == 0)
		{
		printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %.6f\n", d->age);
		}
		if (d->owner == 0)
		{
		printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}

	}
}
