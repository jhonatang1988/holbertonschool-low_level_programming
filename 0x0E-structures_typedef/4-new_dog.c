#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_dog;
	char *owner_dog;
	int i;
	int j;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;

	name_dog = malloc(sizeof(char) * (i + 1));
	if (name_dog == NULL)
		return (NULL);

	for (j = 0; j <= i + 1; j++)
	{
		name_dog[j] = name[j];
	}

	for (i = 0; owner[i] != '\0'; i++)
		;

	owner_dog = malloc(sizeof(char) * (i + 1));
	if (owner_dog == NULL)
		return (NULL);

	for (j = 0; j <= i + 1; j++)
	{
		owner_dog[j] = owner[j];
	}

	new_dog->name = name_dog;
	new_dog->age = age;
	new_dog->owner = owner_dog;

	return (new_dog);
}
