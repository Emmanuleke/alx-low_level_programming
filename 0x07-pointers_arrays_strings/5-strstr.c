#include "main.h"
/**
 * _strstr - this is our prototype
 * @haystack: thid is a predefined variable
 * @needle: this is the other pre defined variable
 * Return: always zero
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;
while (haystack[i])
{
while (needle[j] && (haystack[i] == needle[0]))
{
if (haystack[i + j] == needle[j])
j++;
else
break;
}
if (needle[j])
{
i++;
j = 0;
}
else
return (haystack + i);
}
return (0);
}
