#include "holberton.h"

/**
 * main - Entry point
 *
 * Description: asdasdasdw a
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

for (i = 1; i < 100; i++)
if (i % 3 == 0)
if (i % 5 == 0)
printf("FizzBuzz ");
else
printf("Fizz ");
else
if (i % 5 == 0)
printf("Buzz ");
else
printf("%d ", i);
printf("Buzz\n");
return (0);
}
