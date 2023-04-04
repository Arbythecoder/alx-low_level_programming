#include <unistd.h>
/** _putchar -writes the character c to stdout
 * @c: The character to print
 * by @arbythecoder
 * Return: success 1
 * On error, return -1, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}	
