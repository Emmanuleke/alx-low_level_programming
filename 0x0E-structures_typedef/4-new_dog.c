#include "dog.h"
#include <stdio.h>
/**
 * _strlen - checks length of string
 * @str: the stringto be checked
 * _strcopy - copies string
 * @dest: character 
 * @src: variable
 */
int _strlen(char *str);
char _strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

int _strlen(char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}

char _strcopy(char *dest, char *src)
{
int index = 0;
for (index = 0; src[index]; index++)
dest[index] = src[index];
dest[index] = '\0';
return (dest);
}
/**
 * new_dog - new dog
 * @name: the new name
 * @age: new age
 * @owner:the new owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
doggo = malloc(sizeof(dog_t));
if (doggo == NULL)
return (NULL);
}
