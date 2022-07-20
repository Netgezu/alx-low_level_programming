#include "main.h"
/**
 * _puts_recursion - function that prints a string 
 * @s: is a string
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s < '\0')
_putchar("%d", *s);
}
