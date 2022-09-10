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
printf("%d %d", n % 10, n);
if (n % 10 > 5)
printf(" and is greater than 5");
else if (n % 10 == 0)
printf(" and is 0");
else if (n % 10 < 6 && !0)
printf(" and is less than 6 and not 0");
return (0);
}
