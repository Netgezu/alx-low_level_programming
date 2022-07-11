#include "main.h"
/**
 * _puts - prints a string
 * @str: a string
 * Return: void
 */
void _puts(char *str)
{
int i;
for (i = 0; i < '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
