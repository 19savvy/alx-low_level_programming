#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024
/**
 * print_error_and_exit - Print an error message and exit the program.
 *
 * This function prints the given error message to the standard error output
 * and then exits the program with the specified exit code.
 *
 * @message: The error message to be printed.
 * @exit_code: The exit code to use when terminating the program.
 */

void print_error_and_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * open_file - a file with specified flags and mode.
 *
 * This function attempts to open the specified file with the given flags
 * and mode. If the open operation fails, an error message is generated
 * and the program exits with an error code.
 *
 * @filename: The name of the file to open.
 * @flags: The flags to be used when opening the file
 * @mode: The file mode to use if the file needs to be created
 * Return: The file descriptor of the opened file, or the program
 * exits if failed.
 */
int open_file(const char *filename, int flags, int mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		char err_msg[100];

		snprintf(err_msg, sizeof(err_msg), "Error: Can't open %s\n", filename);
		print_error_and_exit(err_msg, 98);
	}
	return (fd);
}

/**
 * main - Copy content from one file to another using a buffer.
 *
 * This program reads content from the source file in chunks of BUFFER_SIZE
 * and writes it to the destination file. It handles various error scenarios
 * including incorrect
 * usage, file opening failure, read and write errors, and file descriptor
 * closure.
 *
 * Usage: program_name file_from file_to
 * If the number of arguments is incorrect, the program exits with code 97
 * If file_to already exists, it is truncated.
 * If file_from cannot be read, the program exits with code 98.
 * If file_to cannot be created or written, the program exits with code 99.
 * If a file descriptor cannot be closed, the program exits with code 100.
 *
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: 0 on success, other codes on failure.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error_and_exit("Usage: program_name file_from file_to", 97);
	}

	fd_from = open_file(argv[1], O_RDONLY, 0);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error_and_exit("Error: Can't write to file_to", 99);
		}
	}

	if (bytes_read == -1)
	{
		print_error_and_exit("Error: Can't read from file_from", 98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		print_error_and_exit("Error: Can't close file descriptor", 100);
	}
	return (0);
}

