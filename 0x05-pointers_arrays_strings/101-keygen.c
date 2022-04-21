#include "main.h"
#include <stdlib.h>
#includ <time.h>
#include <stdio.h>
/**
 * my task
 */
int main(void)
{
int num;

srand(time(0));
num = rand();
printf("%i\n", num);
return (0);
}
