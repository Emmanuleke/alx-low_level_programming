#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
*main -entry point
*description: this code finds a number n and prints its last digit
*Return: always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* my code */
printf("%d", n % 10);
return (0);
}
