#include <stdio.h>
#include "dog.h"
/**
 *  init_dog functon prototype
 *  struct dog - struvture data type
 *  @d: pointer to structure
 *  @name: name of owner
 *  @age: age of owner
 *  @owner:the owner
 *  Return: 0 for success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
d.name = name;
d.age = age;
d.owner = owner;

}
