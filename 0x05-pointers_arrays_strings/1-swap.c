#include "holberton.h"

/**
 * swap_int - entry point
 * @a: pointer int
 * @b: pointer int
 * Description: Swap values of 2 ints
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int saver;

saver = *a;
*a = *b;
*b = saver;
}
