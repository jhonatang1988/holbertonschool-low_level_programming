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
	char *name_dog = NULL;
	char *owner_dog = NULL;
	int i = 0;
	int j = 0;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	i++;

	name_dog = malloc(sizeof(char) * (i));
	if (name_dog == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		name_dog[j] = name[j];
	}
	name_dog[j] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		;
	i++;

	owner_dog = malloc(sizeof(char) * (i));
	if (owner_dog == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		owner_dog[j] = owner[j];
	}
	owner_dog[j] = '\0';

	new_dog->name = name_dog;
	new_dog->age = age;
	new_dog->owner = owner_dog;

	return (new_dog);
}
