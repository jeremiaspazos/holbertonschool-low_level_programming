#include "holberton.h"

/**
 * _puts - Entry point
 * @str: string
 *
 * Description: function that prints a string followed by a new line
 * Return: String
 */

void _puts(char *str)
{
int mark = 0;

while (*(str + mark))
{
_putchar(*(str + mark));
mark++;
}
_putchar('\n');
}
