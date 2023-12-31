#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -   concatenates two strings.
 *@s1: input
 *@s2: input
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
char *result = NULL;
size_t len1 = 0;
size_t len2 = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

len1 = strlen(s1);
len2 = strlen(s2);

result = (char *)malloc(len1 + len2 + 1);
if (result == NULL)
{
return (NULL);
}

strcpy(result, s1);
strcat(result, s2);

return (result);
}
