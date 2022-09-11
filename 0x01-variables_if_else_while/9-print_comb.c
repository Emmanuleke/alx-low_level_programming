#include <stdio.h>
/*additional heading */
/**
*main -executes
*this programm prints all possible combinations
*Return: value always 0 (success)
*/
int main(void)
{
int a, b, c;
for (a = 1; a <= 3; a++)
putchar(a);
for (b = 1; b <= 3; b++)
putchar(b);
for (c = 1; c <= 3; c++)
putchar(c);
putchar(a);
return (0);
}

