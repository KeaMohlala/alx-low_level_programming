#ifndef main_h
#define main_h
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void read_print_file(int fd_from, int fd_to, const char **file_from,
const char **file_to);
int copy_textfile(const char *file_from, const char *file_to);

#endif
