#include "main.h"

/**
 * _pow_recursion - prototype
 * @x: variable
 * @y: varible
 * Return: void
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if
return (1);
return (x * _pow_recursion(x, y + 1));
}