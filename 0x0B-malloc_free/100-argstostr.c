#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments.
 * @ac: number of arguments.
 * @av: array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
    int a, b, c;
    char *str;

    if (ac == 0 || av == NULL)
        return (NULL);

    for (a = 0, b = 0; a < ac; a++)
    {
        for (b = 0; av[a][b]; b++)
            c++;
        c++; 
    }

    str = malloc(c * sizeof(char));

	if (str == NULL)
		 return (NULL);

	c = 0;
    for (a = 0; a < ac; a++)
    {
	for (a = 0; av[a][b]; b++)
		 str[c++] = av[a][b];
	str[c++] = '\n';
	return (str);
    }
}
