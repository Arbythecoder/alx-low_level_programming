#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number -  inputs integer is_prime number
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
        if (n <= 1)
                return (0);

        if (actual_prime(n, n - 1) == 1)
                return (1);
        else
                return (0);
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int actual_prime(int n, int i)
{
        if (i == 1)
                return (1);

        if (n % i == 0)
                return (0);

        return (actual_prime(n, i - 1));
}
