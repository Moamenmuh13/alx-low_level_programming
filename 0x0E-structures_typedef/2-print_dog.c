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
printf("Name: %s\n", d->name ? d->name : "nill");
printf("age: %s\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "nill");
}
}
