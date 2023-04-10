#include "main.h"

/**

_memset - a function that sets memory to a specific value

@s: pointer to the memory to be set

@c: value to be set

@n: number of bytes to be set

Return: a pointer to the memory area 's'

*/

char *_memcpy(char *dest, char *src, unsigned int n)

{

        int r = 0;

        int i = n;


        for (; r < i; r++)

        {

                dest[r] = src[r];

                n--;

        }

        return (dest);

}
