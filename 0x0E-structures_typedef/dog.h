#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog struct
 *
 * @age: age of dog
 * @owner: dogs owner
 * @name: dogs name
 *
 * Description: dog struct
 */
struct dog
{
	float age;
	char *owner;
	char *name;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
