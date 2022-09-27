#include "main.h"
/**
 * _strpbrk - this executes the code
 * @s: the constant variables
 * @accept: constant variable
 * Return: always zero
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j])
return (s + i);
}
return (0);
}
