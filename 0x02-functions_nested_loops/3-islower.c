#include <stdio.h>
#include <ctype.h>
/**
* _islower - check the code.
* Return: Always 0.
*/
int _islower(int c)
{
if (islower(c))
return (1);
else
return (0);
}
int nati(void)
{
int r;
r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);  
}
