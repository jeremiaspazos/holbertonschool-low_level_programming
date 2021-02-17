#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: array
 * @n: amount of numbers to print
 *
 * Description: Print a array to the index n
 * Return: array[n]
 */

void print_array(int *a, int n)
{
int contador = 0;

while (contador < n)
{
printf("%d", a[contador]);
if (contador < (n - 1))
printf(", ");
contador++;
}
printf("\n");
}
