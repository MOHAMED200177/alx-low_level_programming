#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *@str: input
 * Return: Always 0.
 */
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
char *new_str = NULL;
if (str == NULL)
{
return (NULL);
}
new_str = (char *)malloc(strlen(str) + 1);
if (new_str == NULL)
{
return (NULL);
}
strcpy(new_str, str);
return (new_str);
}

