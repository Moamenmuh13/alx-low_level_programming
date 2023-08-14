#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the dog class
 * @d: pointer of the class
 * Return: void
*/

void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
printf("Name: %s\n", d->name);
else
printf("nill \n");

printf("Age: %f\n", d->age);

if (d->owner != NULL)
printf("A: %s\n", d->owner);
else
printf("nill \n");

}
}
