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
int name_len = 0, i, owner_len, j;

if (name == NULL || owner == NULL)
return (NULL);

dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

while (name[name_len] != '\0')
name_len++;

new_dog->name = malloc(name_len + 1);

if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

for (i = 0; i < name_len; i++)
new_dog->name[i] = name[i];

while (owner[owner_len] != '\0')
owner_len++;

new_dog->owner = malloc(sizeof(owner_len + 1));

if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

for (j = 0; j < owner_len; j++)
new_dog->owner[j] = owner[j];

return (new_dog);
}

