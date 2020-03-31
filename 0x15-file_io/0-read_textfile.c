#include "holberton.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX stdout
 *@filename: file name of the file to be read
 *@letters: number of letters to read and print
 *Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int o, r, w;
char *buf;
if (filename == NULL)
return (0);
buf = malloc(sizeof(char) * (letters));
if (buf == NULL)
return (0);
o = open(filename, O_RDONLY);
if (o == -1)
return (0);
r = read(o, buf, letters);
if (r == -1)
return (0);
w = write(STDOUT_FILENO, buf, r);
if (w == -1)
return (0);
if (w != r)
return (0);
close(o);
free(buf);
return (w);
}
