#include "holberton.h"

/**
 * print_sign - prints sign of number (+,-,0)
 * @n: number to check
 * Return: 1 for positive, -1 for negative, 0 for 0
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}

}
