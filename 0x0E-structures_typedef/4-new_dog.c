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
	dog_t *new_dog = NULL;
	int i = 0;
	int j = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	i++;

	new_dog->name = malloc(sizeof(char) * (i));
	if (new_dog->name == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		new_dog->name[j] = name[j];
	}

	for (i = 0; owner[i] != '\0'; i++)
		;
	i++;

	new_dog->owner = malloc(sizeof(char) * (i));
	if (new_dog->owner == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		new_dog->owner[j] = owner[j];
	}

	new_dog->age = age;

	return (new_dog);
}
