#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: pointer of the name
 * @age: age of the dog
 * @owner: pointer of the owner
 * Return: new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
int name_len = 0, i, owner_len = 0;
dog_t *dog;

if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

while (name[name_len] != '\0')
name_len++;

dog->name = malloc(name_len + 1);

if (dog->name == NULL)
{
free(dog);
return (NULL);
}

for (i = 0; i < name_len; i++)
dog->name[i] = name[i];
dog->name[i] = '\0';

while (owner[owner_len] != '\0')
owner_len++;

dog->owner = malloc(sizeof(owner_len + 1));

if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}

for (j = 0; j < owner_len; j++)
dog->owner[j] = owner[j];
dog->owner[j] = '\0';

dog->age = age;

return (dog);
}

