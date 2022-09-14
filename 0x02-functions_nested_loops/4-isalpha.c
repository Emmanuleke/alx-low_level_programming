#include "main.h"
/**
 * _isalpha-checks for alphabets
 * @c: hold the value to be checked
 * Return: if an alphabet (0)
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
