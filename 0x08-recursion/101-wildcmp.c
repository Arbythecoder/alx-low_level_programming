#include "main.h"

/**
 * wildcmp - compares two strings with * wildcard support
 * @s1: first string to compare
 * @s2: second string to compare, may contain *
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        if (*(s2 + 1) == '*')
        {
            return wildcmp(s1, s2 + 1);
        }
        else
        {
            return (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)));
        }
    }
    if (*s1 == *s2)
    {
        if (*s1 == '\0')
        {
            return 1;
        }
        else
        {
            return wildcmp(s1 + 1, s2 + 1);
        }
    }
    return 0;
}