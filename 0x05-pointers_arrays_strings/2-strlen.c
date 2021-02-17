#include "holberton.h"

/**
 * _strlen - Entry point
 * @s: string
 *
 * Description: Function that gives the lenght of a string
 * Return: Lenght of string
 */

int _strlen(char *s)
{
int mark = 0;

while (*(s + mark))
mark++;
return (mark);
}
