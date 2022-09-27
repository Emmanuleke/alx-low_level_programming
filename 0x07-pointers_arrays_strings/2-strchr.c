#include "main.h"
/**
 * _strchr - the executio begins here
 * @s:this is where the characters are copied
 * @c: this are the characters to be copied
 * Return: always zero
 */
char *_strchr(char *s, char c)
{
int j;
for (j = 0; *(s + j); j++)
if (*(s + j) == c)
return (s + j);
if (*(s +  j) == c
return (s + j);
return (0);
}
