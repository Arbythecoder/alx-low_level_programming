/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int length = _strlen_recursion(s);
    return _is_palindrome(s, 0, length - 1);
}

/**
 * _is_palindrome - helper function for is_palindrome
 * @s: the string to check
 * @start: the start index to check
 * @end: the end index to check
 *
 * Return: 1 if s is a palindrome from start to end, 0 otherwise
 */
int _is_palindrome(char *s, int start, int end)
{
    if (start >= end)
        return 1;
    if (s[start] != s[end])
        return 0;
    return _is_palindrome(s, start + 1, end - 1);
}

/**
 * _strlen_recursion - gets the length of a string with recursion
 * @s: the string to measure
 *
 * Return: the length of s
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + _strlen_recursion(s + 1);
}