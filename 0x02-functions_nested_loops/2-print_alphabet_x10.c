#include "main.h"
/**
 * print_alphabet- function to priny allpabet x10
 * this code prints alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
for (i = '0'; i <= '9'; i++)
{
char c;
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
