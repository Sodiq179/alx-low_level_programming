#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: arguments
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i;

	unsigned int long len = 0, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	len += (ac + 1);

	s = malloc(len * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}

	return (s);
}
