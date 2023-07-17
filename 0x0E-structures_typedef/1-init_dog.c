#include <dog.h>
/**
* init_dog dog - initialize a variable of type struct dog
*@d : input
*@name : dogs name
*@age : dogs age
*@owner : owner name
* Return: always 0 (success)
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
