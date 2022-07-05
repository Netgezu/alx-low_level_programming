#include <stdio.h>
/**
* print_alphabet_x10 - check the code.
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
int i;
char ch;
for (i = 0; i <= 9; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
}
