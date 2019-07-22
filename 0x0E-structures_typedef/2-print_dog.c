#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 *
 * @d: address of struct
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\nAge: %f\nOwner: %s\n",
	       d->name == NULL ? "(nil)\n" : d->name,
	       d->age,
	       d->owner == NULL ? "(nil)\n" : d->owner);
}
