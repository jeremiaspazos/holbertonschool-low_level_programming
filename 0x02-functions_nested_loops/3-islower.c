#include "holberton.h"

/**
 * _islower - check lowercase character
 * @c: is the character to be checked
 * Return: 1 = lowercase, 0 = no lowercase
 */
int _islower(int c)
{
if (c <= 122 && c >= 97)
return (1);
else
return (0);
}
