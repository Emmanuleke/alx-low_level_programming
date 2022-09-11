#include <stdio.h>
/* more headers goes there */
/**
*main -entry point
*description: this code prints out alphabets in lowercase
*Return: always 0 (success)
*/
int main(void)
{
int ch = '0';
for (ch = '0'; ch <= '10'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
