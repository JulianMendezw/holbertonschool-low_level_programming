/*
 * File: 4-new_dog.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

char *_strdup(char *str);

/**
 * new_dog - A function that prints a struct dog.
 *@name: Pointer to struture.
 *@age: Dog's age.
 *@owner: Owner's name.
 * Return: void.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
		return (NULL);
	newDog->name = _strdup(name);
	if (!newDog->name)
	{
		free(newDog);
		return (NULL);
	}
	newDog->age = age;
	newDog->owner = _strdup(owner);
	if (!newDog->owner)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}
	return (newDog);
}

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 *@str: string source.
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

char *_strdup(char *str)
{
	char *copy;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		copy[index] = str[index];

	copy[len] = '\0';

	return (copy);
}
