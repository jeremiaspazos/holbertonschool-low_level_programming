#include "holberton.h"

/**
 * print_diagonal - Entry point
 * @n: number of backlash to print
 *
 * Description: asadsadsa
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
int i, j;

for (i = 1; i <= n; i++)
{
for (j = 1; j < i; j++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
