#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
size_t _strlen(char *s);
int append_text_to_file(const char *filename, char *text_content);
int check_args(int argc, char *argv[]);
int open_files(char *file_from, char *file_to);
int copy_files(int fd_from, int fd_to, char *file_from, char *file_to);
int close_files(int fd_from, int fd_to);

#endif
