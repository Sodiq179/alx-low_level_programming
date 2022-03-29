#include "main.h"

/**
 * _memcpy - This function that copies memory area.
 * @dest: pointer to memory area
 * @src: array with replace value
 * @n: number of bytes to fill
 * Return: memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n; /* only accept positive sizes */

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);
}
