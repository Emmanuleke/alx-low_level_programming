#include <stdio.h>
/* more headers goes there */
/**
*main -entry point
*description: this code prints out alphabets in lowercase
*Return: always 0 (succes)
*/
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
