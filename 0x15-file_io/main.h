#ifndef FILE_H
#define FILE_H
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);



#endif
