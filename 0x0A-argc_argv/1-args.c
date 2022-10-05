#include <stdio.h>

/**
 * main - this prints the number of arguments passed to it
 * @argc: parameter
 * @argv: parameter
 * Return: 0 for success
 */
int main(int argc, char *argv[] __atributes__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
