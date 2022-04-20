#include "main.h"

/**
 * swap_int - swap the values of two integer a and b
 *@a: a pointer to an int that will be updated
 *@b: B pointer to an int that will be updated
 * Return: void that means our answer is correct
 */

void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
}
