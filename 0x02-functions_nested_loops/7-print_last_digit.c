#include "holberton.h"

/**
 * print_last_digit - prints last digit of n
 * @n: character to check
 * Return: the last number
 */

int print_last_digit(int n)
{
int last = n % 10;

if (last < 0)
last = -last;

_putchar(last + '0');
return (last);
}
