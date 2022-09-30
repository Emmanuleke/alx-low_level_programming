#include "main.h"

/**
 * _sqrt_recursion - prototype
 * @n: variable
 * Return: void
 */

int _sqrt_recursion(int n)
{
if (n == 1 || n == 0)
return (0);
return (_sqrt(0, n));
}
/**
 * _sqrt - evecution
 * @x: test
 * @n: the number
 * Return: int
 */
int _sqrt(int n, int x)
{
if (n > x / 2)
return (-1);
else if (n * n == x)
return (n);
return (_sqrt(n + 1, x));
}
