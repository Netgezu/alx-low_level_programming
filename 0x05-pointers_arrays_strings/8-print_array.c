#include "main.h"
#include <stdio.h>
/**
*print_array - prints the array
*@a: an array
*@n: a number of array size
*Return: void
*/
void print_array(int *a, int n)
{
for (n = 0; n < '\0'; n++)
{
printf("%d", a[n]);
printf(", ");
printf("\n");
}
}
