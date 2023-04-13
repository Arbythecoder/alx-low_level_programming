#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings in a newly allocated
 * space in memory
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concatenate
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        unsigned int len1 = 0, len2 = 0;
        char *str_concat;
        unsigned int a, b;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
      if (s2 == NULL)
                s2 = "";

        while (*(s1 + len1) != '\0')
                len1++;

        while (*(s2 + len2) != '\0')
                len2++;

        if (n >= len2)
                n = len2;

        str_concat = malloc(sizeof(char) * (len1 + n + 1));

        if (str_concat == NULL)
                return (NULL);


        for (a = 0; a < len1; a++)
		*(str_concat + a) = *(s1 + a);

        for (b = 0; b < n; b++)
        {
                *(str_concat + len1) = *(s2 + b);
                len1++;
        }
        *(str_concat + len1) = '\0';

        return (str_concat);

}

