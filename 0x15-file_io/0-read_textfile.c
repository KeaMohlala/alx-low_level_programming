#include "main.h"
#include <stdlib.h>

/**
* read_textfile - function that reads text file and prints stdout
* @filename: name of the file to read and print
* @letters: number of letters to read and print
* Return: actual velue of letters read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buf;
ssize_t count_read, count_print, i;

if (filename == NULL)
return (0);

fd = open(filename, O_RDWR);
if (fd == -1)
{
return (0);
}
buf = malloc(letters);
if (buf == NULL)
{
close(fd);
return (0);
}

count_read = read(fd, buf, letters);
if (count_read == -1)
{
free(buf);
close(fd);
return (0);
}
count_print = 0;
for (i = 0; i < count_read; i++)
{
count_print += write(STDOUT_FILENO, &buf[i], 1);
if (count_print == -1)
{
free(buf);
close(fd);
return (0);
}
}
free(buf);
close(fd);
return (count_print);
}
