#include "main.h"
#include <stdio.h>

/**
 * _strcpy -   copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: input
 * @src: input
 *
 * Return: Always 0.
 */
char *my_strcpy(char *dest, const char *src) {
char *p = dest;
while (*src != '\0') {
*p++ = *src++;
}
*p = '\0';
return dest;
}

