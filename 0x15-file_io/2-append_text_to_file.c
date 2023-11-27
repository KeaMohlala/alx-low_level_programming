#include "main.h"
#include <string.h>

/**
* append_text_to_file - append text at the end of a file
* @filename: name of the file
* @text_content: string to add at the end of the file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int write_value;

if (filename == NULL)
return (-1);
if (text_content == NULL)
text_content = "";

fd  = open(filename, O_RDWR | O_APPEND, 664);
if (fd == -1)
return (-1);

write_value = write(fd, text_content, strlen(text_content));
if (write_value == -1)
{
return (-1);
}
close(fd);
return (1);
}
