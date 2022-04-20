#include "main.h"
/**
 * print_rev - print a string in reverse order
 *@s: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void print_rev(char *s)
{
int a;

a = 0;
while (s[a] != '\0')
{
a++;
}

for (a = a - 1; a >= 0; a--)
{
_putchar (s[a]);
}

_putchar ('\n');
}
