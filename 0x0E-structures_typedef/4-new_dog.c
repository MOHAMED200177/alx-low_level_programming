#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy;
char *owner_copy;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

name_copy = malloc(sizeof(char) * (_strlen(name) + 1));
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}

owner_copy = malloc(sizeof(char) * (_strlen(owner) + 1));
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}

_strcpy(name_copy, name);
_strcpy(owner_copy, owner);

new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

return (new_dog);
}

/**
 * _strlen - returns the length of a string
 * @s: string to check length of
 *
 * Return: length of string
 */
int _strlen(char *s)
{
int len = 0;

while (*s++)
len++;

return (len);
}
/**
 * _strcpy - copies a string from src to dest
 * @dest: destination buffer
 * @src: source buffer
 *
 * Return: pointer to dest buffer
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
dest[i] = src[i];

dest[i] = '\0';

return (dest);
}
