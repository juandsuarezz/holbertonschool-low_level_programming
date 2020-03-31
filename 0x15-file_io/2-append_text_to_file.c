#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int c = 0;
int o;
int w;
if (filename == NULL)
return (-1);
o = open(filename, O_APPEND | O_WRONLY);
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
