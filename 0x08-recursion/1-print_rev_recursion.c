#include "main.h"
/**
 * _print_rev_recursion - prototype
 * @s: constant variable
 *
 * Return: always zero
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
