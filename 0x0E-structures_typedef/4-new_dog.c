#include "dog.h"
#include <stdlib.h>

/**
 *_strlen - find the length of a string
 *@str: the string to be measured
 *
 *Return: the length of the string
 */

int _strlen(char *str)
{
int len = 0;

while (*str++)
len++;

return (len);
}

/**
 *new_dog create a newdog
 *@name: the new of the dog
 *@age: the age of the dog
 *@owner: the owner of the dog
 *
 *Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo;

if (name == NULL || age < 0 || owner == NULL)
	return (NULL);
doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (doggo->owner == NULL)
{
free(doggo->name);
return (NULL);
}

doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (doggo->owner == NULL)
{
free(doggo->name);
free(doggo);
return (NULL);
}
doggo->name = _strcopy(doggo->name, name);
doggo->age = age;
doggo->owner = _strcopy(doggo->owner, owner);

return (doggo);
}

