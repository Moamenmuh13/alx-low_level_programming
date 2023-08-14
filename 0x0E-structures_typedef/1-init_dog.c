#include "dog.h"

/**
 * init_dog - init the dog class
 * @d: a pointer of the class
 * @name: pointer of the name of the dog
 * @age: age of the dog
 * @owner: pointer of the owner to the dog
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
