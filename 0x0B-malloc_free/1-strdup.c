#include "main.h"
#include <stdlib.h>

/**
 * _strdup - d duplicates a string using malloc
 * @str: the string to d
 *
 * Return: On success, a pointer to the newly allocated string.
 * On failure, NULL.
 */
char *_strdup(char *str)
{
    char *d;
    unsigned int i, len = 0;

    if (str == NULL)
        return (NULL);

  
    while (str[len] != '\0')
        len++;

    d = malloc(sizeof(char) * (len + 1));

    if (d == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
        d[i] = str[i];

    return (d);
}
