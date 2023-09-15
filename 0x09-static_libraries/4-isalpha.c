#include "main.h"

/**
* _isalpha -  ckeck if chracter is a letter
* both lowercaser or uppercase
*
*@c: check input from other function
*Return: returns 1 if c lowercase or uppercase
*        return 0 is c (ssuccess)
*
*/
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
return (0);
}
