#include "main.h"
/**
 * _strspn = this initailizes our code 
 * @s: this is the pointer
 * @accept: this is the alphabet to be accepted
 * Return is always zero
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
