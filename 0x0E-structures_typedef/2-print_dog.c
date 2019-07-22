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

	printf("Name: %s\nAge: %lf\nOwner: %s\n",
	       d->name == NULL ? "(Nil)\n" : d->name,
	       d->age,
	       d->owner == NULL ? "(Nil)\n" : d->owner);
}
