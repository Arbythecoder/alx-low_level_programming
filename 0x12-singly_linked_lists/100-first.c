#include <stdio.h>

/**
 * newprint - prints a statements before the main function
 * function is executed.
 *
 */

void newprint(void) _attribute_ ((constructor));
void newprint(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
