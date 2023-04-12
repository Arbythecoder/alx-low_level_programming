#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to newly-allocated memory containing
 *  concatenated string or NULL if allocation fails
 */

char *str_concat(char *s1, char *s2)
{
    char *join;
    int a, b, len;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    a = 0;
    while (s1[a] != '\0')
        a++;

    b = 0;
    while (s2[b] != '\0')
        b++;

    len = a + b + 1;

    join = malloc(len * sizeof(char));
    if (join == NULL)
        return (NULL);

    a = 0;
    while (*s1 != '\0')
       join[a++] = *s1++;

    b = 0;
    while (*s2 != '\0')
       join[a+b++] = *s2++;

    join[a+b] = '\0';

    return (join);
}
