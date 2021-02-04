#include <stdio.h>

/**
 *main - function to display a-zA-Z
 *Return: 0 = ok
 */

int main(void)
{
char al;

for (al = 'a' ; al <= 'z' ; al++)
{
putchar(al);
}
for (al = 'A' ; al <= 'Z' ; al++)
{
putchar(al);
}
putchar('\n');
return (0);
}
