#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to the end
 * @filename: name of the file
 * @text_content: null terminated string to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int f, len = 0, bytes_written;
if (filename == NULL)
return (-1);
f = open(filename, O_WRONLY | O_APPEND);
if (f == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len])
len++;
bytes_written = write(f, text_content, len);
if (bytes_written == -1)
return (-1);
}
close(f);
return (1);
}
