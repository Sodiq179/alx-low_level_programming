#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 *
 * Return: The concatenated string pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	long unsigned int i, j, k, l;

	if (s1 == NULL && s2 == NULL)
	{
		s3 = malloc(1 * sizeof(char));
		s3[0] = '\0';
		return (s3);
	}

	else if (s1 == NULL)
	{
		s3 = malloc((strlen(s2) + 1) * sizeof(char));
		for (k = 0; k < strlen(s2); k++)
			s3[k] = s2[k];
		s3[k] = '\0';
		return (s3);
	}

	else if (s2 == NULL)
	{
		s3 = malloc((strlen(s1) + 1) * sizeof(char));
                for (k = 0; k < strlen(s1); k++)
                        s3[k] = s1[k];
                s3[k] = '\0';
                return (s3);
        }

	else
	{
		s3 = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
		
		if (s3 == NULL)
			return (NULL);
		
		for (k = 0; k < strlen(s1); k++)
			s3[k] = s1[k];
		for (l = 0; l < strlen(s2); l++)
			s3[strlen(s1) + l] = s2[l];
		s3[strlen(s1) + strlen(s2)] = '\0';
		return (s3);
	}
}
