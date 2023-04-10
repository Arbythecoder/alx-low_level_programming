#include "main.h"

/**
* _strncpy - copy a string.
* @dest: the destination buffer.
* @src: the source string.
* @n: maximum number of bytes to copy.
* Return: pointer to the destination buffer. 
*/

int _atoi(char *s)

{

    int sign = 1, i = 0;

    unsigned int res = 0;

    if (s[0] == '-')

    {

        sign = -1;

        i++;

    }

    for (; s[i] != '\0'; i++)

    {

        if (s[i] < '0' || s[i] > '9')

            break;

        res = res * 10 + s[i] - '0';
	}
	
	return sign * res;

}
