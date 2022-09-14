# include "main.h"
/**
 * jack_bauer- this executes the code
 * this code prints the minutes
 * Return: always zero
 */
void jack_bauer(void)
{
int hour = 0;
int min = 0;
int minreminder;
int hourreminder;
while (hour < 23)
{
while (min < 59)
minreminder = min % 10;
hourreminder = hour % 10;
_putchar(hour / 10 + '0');
_putchar(hourreminder + '0');
_putchar(':');
_putchar(min / 10 + '0');
_putchar(minreminder + '0');
min++;
_putchar('\n');
}
hour++;
min = 0;
}
