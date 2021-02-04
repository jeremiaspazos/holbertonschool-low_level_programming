#include <stdio.h>

/**
 * main -  prints numbers with "," and space
 * Return: 0 = ok
 */

int main(void)
{
int n;

for (n = 48; n <= 57; n++)
{
putchar(n);
if (n < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
