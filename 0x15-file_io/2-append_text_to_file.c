#include "main.h"

/**
 * append_text_to_file - Append text at the end of a file.
 * @filename: Name of the file to append to.
 * @text_content: Content to add.
 *
 * Return: 1 if the file exists, -1 if it does not exist or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor;
int num_letters;
int bytes_written;

if (!filename)
return (-1);

file_descriptor = open(filename, O_WRONLY | O_APPEND);

if (file_descriptor == -1)
return (-1);

if (text_content)
{
for (num_letters = 0; text_content[num_letters]; num_letters++)
;

bytes_written = write(file_descriptor, text_content, num_letters);

if (bytes_written == -1)
return (-1);
}

close(file_descriptor);

return (1);
}

