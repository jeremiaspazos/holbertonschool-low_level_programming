#include "holberton.h"

/**
 * jack_bauer - Entry point
 *
 * Description: display all the minutes and hours of a day
 * Return: --
 */

void jack_bauer(void)
{
int hour1, hour2, min1, min2, tope;

for (hour1 = 0; hour1 <= 2; hour1++)
{
if (hour1 == 2)
tope = 3;
else
tope = 9;
for (hour2 = 0; hour2 <= tope; hour2++)
for (min1 = 0; min1 <= 5; min1++)
for (min2 = 0; min2 <= 9; min2++)
{
_putchar('0' + hour1);
_putchar('0' + hour2);
_putchar(':');
_putchar('0' + min1);
_putchar('0' + min2);
_putchar('\n');
}
}
}
