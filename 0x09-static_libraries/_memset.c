#include "main.h"

/**

 * _memset - copies a block of memory with a specific value

 * @s: pointers to the memory address

 * @b: the desired value

 * @n: number of bytes to be copied

 *

 * Return: a pointer to a specific value

 */

char *_memset(char *s, char b, unsigned int n)

{

        int i = 0;


        for (; n > 0; i++)

        {

                s[i] = b;

                n--;

        }

        return (s);

}

