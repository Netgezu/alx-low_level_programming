#include "main.h"
/**
* print_last_digit - check the code.
* @n: is ascii
* Return: Always 0.
*/
int print_last_digit(int n)
{
int digit = n % 10;
if (n < 0)
digit = digit * -1;
_putchar(digit + '0');
return (digit);
}
