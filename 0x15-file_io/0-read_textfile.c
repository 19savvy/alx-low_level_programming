#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its content standard output.
 *
 * This function opens the specified file, reads up to @letters number of
 * characters from it,
 * and writes the read content to the standard output
 *
 * @filename: The name of the file to open and read.
 * @letters: The maximum number of characters to read and print.
 *
 * Return: The total number of characters read and printed, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor, bytesRead, bytesWritten;
	char *temp;
	ssize_t total_written = 0;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);
	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor < 0)
	{
		free(temp);
		return (0);
	}

	bytesRead = read(fileDescriptor, temp, letters);
	if (bytesRead < 0)
	{
		free(temp);
		close(fileDescriptor);
		return (0);
	}

	close(fileDescriptor);
	while (bytesRead > 0)
	{
		bytesWritten = write(STDOUT_FILENO, temp + total_written, bytesRead);
		if (bytesWritten <= 0)
		{
			free(temp);
			return (total_written);
		}
		total_written += bytesWritten;
		bytesRead -= bytesWritten;
	}
	free(temp);
	return (total_written);
}
