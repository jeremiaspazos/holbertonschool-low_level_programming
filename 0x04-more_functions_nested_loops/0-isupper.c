#include "holberton.h"

/**
 * _isupper - entry point
 *
 * @c: is a character to test
 * Description: Function that return 1 for uppercase, 0 for anyelse
 * Return: 1 if is uppercase, 0 for anyelse
 */

int _isupper(int c)
{

if (c >= 'A'  && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
