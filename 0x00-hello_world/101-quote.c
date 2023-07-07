#include<unistd.h>

 /**
  * main - ENTRY POINT
  *
  * description:This is a C program that prints a string to the standard output
  * . The string is stored in the qou array and contains a quote from Dora Korpar.
  *  The program uses the write function to write the contents of
  *   the qou array to the standard output. The strlen function is
  *   used to determine the length of the string in the qou array.
  *	
  *
  *Return: 1 (error)
 */
int main(void)
{	char qou[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, &qou, strlen(qou));
	return (1);
}
