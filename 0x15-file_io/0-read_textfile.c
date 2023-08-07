#include "main.h"

/**
 * read_textfile - reads text from a file and prints it
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: number bytes read/printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *fp;
char *buffer;
ssize_t read_count;

if (filename == NULL)
return (0);

fp = fopen(filename, "r");
if (fp == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

read_count = fread(buffer, sizeof(char), letters, fp);
if (read_count == 0)
return (0);

write(STDOUT_FILENO, buffer, read_count);

free(buffer);
fclose(fp);

return (read_count);
}

