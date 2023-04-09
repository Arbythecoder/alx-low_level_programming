#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program.
 * @argc: counts arguments
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */

int main (int argc, char *argv[])
{
int newcount;
	for(newcount = 0; newcount < argc; newcount++)
	{
	
		printf("%s\n", argv[newcount]);

	}
	return(0);
}
