#include<unisdt.h>

 /**
  * main - Entry point
  *
  * description:print a qoute using write function
  *	ssize_t write(int fd, const void *buf, size_t count)
  *
  *Return: 1 (not Success)
 */
int main(void)
{	char qou[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qou, 59);
	return (1);
}
