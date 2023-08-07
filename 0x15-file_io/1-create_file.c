#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <fcntl.h>

/**
 * create_file - Creates a file and writes content to it.
 * @filename: The name of the file to be created.
 * @text_content: A null-terminated string to be
 * written to the file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, content_length = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor < 0)
		return (-1);

	while (text_content && text_content[content_length])
		content_length++;

	bytes_written = write(file_descriptor, text_content, content_length);
	close(file_descriptor);

	if (bytes_written < 0)
		return (-1);

	return (1);
}
