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
	struct dog *dg = NULL;
	int i = 0;
	int j = 0;
	int len;

	if (name == NULL || owner == NULL)
		return (NULL);

	dg = malloc(sizeof(struct dog));
	if (dg == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	dg->name = malloc(sizeof(char) * (i + 1));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	for (len = 0; len <= i; len++)
	{
		dg->name[len] = name[len];
	}
	dg->age = age;
	for (i = 0; owner[j] != '\0'; j++)
		;
	dg->owner = malloc(sizeof(char) * (j + 1));
	if (dg->owner == NULL)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}
	for (len = 0; len <= j; len++)
	{
		dg->owner[len] = owner[len];
	}

	return (dg);
}
