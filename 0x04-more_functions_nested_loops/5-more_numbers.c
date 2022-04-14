#include "main.h"
/**
 * More_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int 1;
int first_number;
int second_nummber;
int result;

i = 0;
result = 0;
while (i < 10)
{
while (result <= 14)
{
if (result < 10)
{
second_number = result;
}

else
{
first_number = result / 10;
second_number = result % 10;
_putchar (first_number + '0');
}

_putchar (second_number + '0');

result++;
}
i++;
result = 0;
_putchar ('\n');
}

}
