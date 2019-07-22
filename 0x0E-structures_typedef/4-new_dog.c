#include "dog.h"
#include <stdlib.h>
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
	dog_t *dg = NULL;
	int i = 0;
	int j = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	i++;

	dg->name = malloc(sizeof(char) * (i));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		dg->name[j] = name[j];
	}

	for (i = 0; owner[i] != '\0'; i++)
		;
	i++;

	dg->owner = malloc(sizeof(char) * (i));
	if (dg->owner == NULL)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		dg->owner[j] = owner[j];
	}

	dg->age = age;

	return (dg);
}
