#include <stdio.h>
/**
*main - main block
*Return: 0
*/
int main(void)
{
char ch;
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
