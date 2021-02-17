#include "holberton.h"

/**
 * *_strcpy - Entry point
 * @src: source
 * @dest: destiny
 *
 * Description: copy a series of chars to
 * Return: copied chars
 */

char *_strcpy(char *dest, char *src)
{
int contador = 0;

while (*(src + contador))
{
*(dest + contador) = *(src + contador);
contador++;
}
*(dest + contador) = '\0';
return (dest);
}
