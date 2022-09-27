#include "main.h"
/**
 * _memset - the execution
 * @s: contains the adress of b
 * @b: the variable to be replaced
 * @n: number of bytes to be replaced
 * Return: always zero
 */
char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
