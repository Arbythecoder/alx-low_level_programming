#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
    int a, new_count = 0;

    for (a = 0; str[a] != '\0'; a++)
    {
       
        if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
        {
            new_count++;
        }
    }

    return (new_count);
}

/**
 * strtow - Splits a string into words
 * @str: The input string to split
 *
 * Return: * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
    char **words;
    int s, t, u, v;

   
    if (str == NULL || str[0] == '\0')
    {
        return (NULL);
    }

   v = count_words(str);

    if (v == 0)
    {
        return (NULL);
    }

    /* Allocate memory for the array */
    words = malloc(sizeof(char *) * (v + 1));

    /* If malloc failed */
    if (words == NULL)
    {
        return (NULL);
    }

    for (s = 0,t = 0; u < v; t++)
    {
        /* Skip whitespace */
        while (str[s] == ' ')
        {
            s++;
        }

        /* Find the end of the word */
       u = s;
        while (str[u] != ' ' && str[u] != '\0')
        {
           u++;
        }

        /* Allocate memory for the word */
        words[t] = malloc(sizeof(char) * (u - s + 1));

        /* If malloc failed */
        if (words[t] == NULL)
        {
            while (t > 0)
            {
                t--;
                free(words[t]);
            }
            free(words);
            return (NULL);
        }

        strncpy(words[t], &str[s], u - s);
        words[t][u - s] = '\0';

        s = u;
	}

    words[t] = NULL;

    return (words);
}
