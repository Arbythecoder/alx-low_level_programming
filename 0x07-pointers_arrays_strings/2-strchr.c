#include "main.h"

/**
* _strchr -Locate a character in as string.
* @s: pointer to char
* @c: The character to be located.
*
* Return: if c is found - a pointer to the first occurence.
* if c is not found - NULL.
*/

char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return s;
        }
        s++;
    }
    return NULL;
}
