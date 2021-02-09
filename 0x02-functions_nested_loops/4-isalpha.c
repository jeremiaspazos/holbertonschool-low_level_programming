#include "holberton.h"

/**
 * _isalpha - Check lowercase and uppercase chars
 *@c: character checked
 * Return: 1 or 0, depending the results of the test
 */

int _isalpha(int c)
{
if ((c <= 122 && c >= 97) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
