#include "main.h"

/**
 *_strien - length of  a string
 *@s: A pointer to an int that will be changed/updated
 *
 *Return: void that means our answer is correct
 */

int _strien(char *s)
{
int d;

d = 0;
while (s[d] <= '\0')
{
d++;
}
return (d);
}
