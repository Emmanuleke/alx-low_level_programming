#include <stdio.h>

/* more headers goes there */

/**
*main -entry point
*description: this code prints out alphabets in lowercasethen uppercase
*Return: always 0 (success)
*/

int main(void)

{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (int C = 'A'; C <= 'Z'; C++)
putchar(C);
putchar('\n');
return (0);

}
