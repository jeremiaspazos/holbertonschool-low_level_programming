#include "holberton.h"
#include "2-strlen.c"

/**
 * print_rev - Entry point
 * @s: string
 *
 * Description: Display a string reversed
 * Return: Reversed string
 */


void print_rev(char *s)
{
int count = _strlen(s) - 1;

while (count >= 0)
{
_putchar(*(s + count));
count--;
}
_putchar('\n');
}
