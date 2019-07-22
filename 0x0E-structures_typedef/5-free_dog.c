#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that free dogs
 *
 * @d: address to a dog
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
