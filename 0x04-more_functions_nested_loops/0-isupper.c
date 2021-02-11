#include "holberton.h"

/**
 * _isupper - Entry point
 * @c: Character
 *
 * Description: Test character uppercase
 * Return: 1 to Upper, 2 to anyelse
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
