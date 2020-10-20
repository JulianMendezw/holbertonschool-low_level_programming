#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - Define a new type struct dog
 * @name: Dog´s name
 * @age: Dos's age
 * @owner: Owner name
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
