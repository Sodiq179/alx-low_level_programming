#include "main.h"
#include <stdlib.h>

/**
 * *create_array - 
 * @size: Size of the string
 * @c: The charcter for initialization
 *
 * Return: The pointer to the string
 */

char *create_array(unsigned int size, char c)
{
    char *s;
    unsigned int i;
    if (size == 0)
    {
        return (NULL);
    }
    s = malloc((size + 1) * sizeof(char));

    for (i = 0; i < size; i++)
    {
        s[i] = c;

    }
    s[i] = '\0';

    return (s);
}
