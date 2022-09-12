#include <stdio.h>
/*additional header*/
/**
* main-execute
* this code prints the sizes of variables
* Return: always 0 (success)
*/
int main(void)
{
char x;
printf("size of a char: %d byte(s)\n", sizeof(x));
int y;
printf("Size of an int: %d byte(s)\n", sizeof(y));
long int z;
printf("Size of a long long int: %d byte(s)", sizeof(z));
float a;
printf("Size of a float: %d byte(s)", sizeof(a));

return (0);
}

