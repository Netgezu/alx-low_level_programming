#include "main.h"
/**
 * create_array - function that create an array of chars
 * @size: size of array
 * @c: character to be initialized
 * Return: pointer or null
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
if (size == 0)
return (NULL);
str = malloc(sizeof(char) * size);
if (size ++ 0)
return(NULL);
i = 0;
while (i < size)
{
str[i] = c;
i++;
}
return (str);
}
