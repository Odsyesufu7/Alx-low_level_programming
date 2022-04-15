#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: rint size
 * Return: Always 0
 */

void print_triangle(int size)

{


int i;
int z;
int d;
int a;

if (size > 0)
{
d = size - 1;
for (i = 0; i < size ; i++)
{
for (z = d; z > 0 ; z--)
{
_putchar (' ');
}

for (a = 0; a <= i; a++)
{
for (z = d; z > 0 ; z--)
{
_putchar (' ');
}

for (a = 0; a <= i; a++)
{
_putchar (35);
}

d--;

_putchar ('\n');


}

}

else
{
_putchar ('\n');
}
}
