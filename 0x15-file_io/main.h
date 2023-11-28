#ifndef __MAIN_H__
#define __MAIN_H__

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/* Read and print a specified number of letters from a text file.*/
ssize_t read_textfile(const char *filename, size_t letters);

/* Create a file and write the given text content. */
int create_file(const char *filename, char *text_content);

/* Open a file and append text content to the end.*/
int append_text_to_file(const char *filename, char *text_content);

#endif /* __MAIN_H__ */

