#include "main.h"
#include <stdio.h>

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 *@s: input
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
int len = strlen(s);
if (len <= 1)
return (1);
if (*s != *(s + len - 1))
return (0);
return (is_palindrome(s + 1) && is_palindrome(s + len - 2));
}
