#include "main.h"

/**
 * _memeset - This function fills memory with a constant byte
 * @s: The array to be modified
 * @b: The value of which the array is modified with
 * @n: Number of bit to be modified
 *
 * Return: Pointer to the array
 */

char *_memset(char *s, char b, unsigned int n)
{
    char *point[n];


    for (int i = 0; i < n; i++)
    {
        point[i] = &s[i];
    }

    for (int i = 0; i < n; i++)
    {
        *point[i] = b;
    }

    return (point);
}
