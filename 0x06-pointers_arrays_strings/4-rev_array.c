#include "main.h"
/**
 * reverse_array - function that reverse content of an array of integers
 * @a: an array of intigers
 * @n: the number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int temp;
for (i = 0; i < n--; i++)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
}
}
