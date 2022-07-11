#include "main.h"
/**
 * swap_int - takes two value and swap
 * @a: an intiger
 * @b: an intiger
 * Return: no return value
 */
void swap_int(int *a, int *b)
{
int i = *a;
*a = *b;
*b = i;
}
