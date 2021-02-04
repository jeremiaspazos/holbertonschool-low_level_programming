#include <stdio.h>

/**
 *main -  function to display the a-z
 *Return: 0 = ok
 */

int main(void)
{
char al;

for (al = 'a' ; al <= 'z' ; al++)
{
putchar(al);
}
putchar('\n');
return (0);
}
