#include "main.h"

/**
*  _islower - function to ckeck if
*              chracter is lowercaser
*
* @c: check input of function
*Return: returns 1 if c lowercase
*        return 0 is c (ssuccess)
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
