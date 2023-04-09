#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds all arguments and prints the sum
 * @argc: number of arguments passed to the program.
 * @argv: array of pointers to the arguments
 *
 * Return: 0 for success, 1 for fail
 */

int main (int argc, char *argv[])
{
 int c, d, sum = 0;

 if (argc == 1)
 {
  printf("%d\n", sum);
  return (0);
 }
 for (c = 1; c < argc; c++)
 {
  for (d = 0; argv[c][d]; d++)
  {
   if (!isdigit(argv[c][d])&& !(argv[c][d] == '-' && d == 0))
   {
	printf("Error\n");
	return (1);
    }
  }
  sum += atoi(argv[c]);
 }
 printf("%d\n", sum);

 return (0);
}
