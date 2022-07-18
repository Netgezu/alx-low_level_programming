#include "main.h"
/**
 * _memcpy - function copies the memory area
 * @dest: new memory area
 * @src: old memory area
 * @n: number of bytes
 * Returns: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
