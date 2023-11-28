#include "main.h"
#include <stdlib.h>

/**
* read_print_file - function to read from one
* buffer and write to another buffer
* @fd_from: file descriptor for the file to read from
* @fd_to: file descriptor for the file to write to
* @file_from: pointer pointer for the file to copy from
* @file_to: pointer pointer for the file to copy to
*/

void read_print_file(int fd_from, int fd_to, const char **file_from,
const char **file_to)
{
int count = 0;
int count_read, count_print;
char buf[1024];

while (count_read != 0)
{
count_read = read(fd_from, buf, 1024);
if (count_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *file_from);
exit(98);
}
count_print = write(fd_to, buf, count_read);
if (count_print == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", *file_to);
exit(99);
}
count++;
}
}

/**
* copy_textfile - functio to copy text from one file to another
* @file_from: pointer to file to copy from
* @file_to: pointer to file to copy to
* Return: 0 if succesful
*/

int copy_textfile(const char *file_from, const char *file_to)
{

int fd_to, fd_from;

fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
exit(99);
}

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}

read_print_file(fd_from, fd_to, &file_from, &file_to);

if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
close(fd_to);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
return (0);
}

/**
* main - entry point
* @ac: number of arguments on the command line
* @av: pointer to aarray of pointers with addresses of the arguments
* Return: 0
*/

int main(int ac, char **av)
{
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
exit(97);
}

copy_textfile(av[1], av[2]);

return (0);
}
