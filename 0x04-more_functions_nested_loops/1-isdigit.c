#include "holberton.h"

/**
 * _isdigit- Entry point
 * @c: character to test
 *
 * Description: Test if character is a digit
 * Return: Return 0 for non digit, 1 for digit
 */
int _isdigit(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (0);
else
return (1);
}
