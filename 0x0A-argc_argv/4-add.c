#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - the main fuvtion
 * @argc: parameter
 * @argv: parameter
 * Return: 0 for success
 */
int main(int argc, char *argv)
{
int a = o, i, j;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (isdigit(argv[i][j]) == 0)
{
puts("Error");
return (1);
}
}
}
for (i = 1; i < argc; i++)
{
a += atoi(argv[i]);
}
printf("%d\n", a);
return (0);
}
