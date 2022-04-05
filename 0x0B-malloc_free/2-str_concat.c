#include "main.h"
#include <stdlib.h>

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
	int len1 = 0, len2 = 0, i, j, k, l;

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;

	s3 = malloc((len1 + len2 + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (k = 0; k < len1; k++)
		s3[k] = s1[k];
	for (l = 0; l < len2; l++)
		s3[len1 + l] = s2[l];
	s3[len1 + len2] = '\0';
	return (s3);
}
