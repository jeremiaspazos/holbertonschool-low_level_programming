#include <stdio.h>

/**
 *main - function to display alphabet without q and e
 *Return: 0 = ok
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c == 'q' || c == 'e')
continue;
putchar(c);
}
putchar('\n');
return (0);

}
