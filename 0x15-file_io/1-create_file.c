#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int c = 0;
int o;
int w;
if (filename == NULL)
return (-1);
o = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
if (o == -1)
return (-1);
if (text_content == NULL)
return (1);
while (text_content[c] != '\0')
c++;
w = write(o, text_content, c);
if (w == -1)
return (-1);
close(o);
return (1);
}
