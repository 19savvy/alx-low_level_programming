#include "main.h"
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the name of the file to be printed
 * @letters: number of letters to be printed
 * Return: The number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *store;
	int openFile, readFile, writeFile;

	if (filename == NULL)
		return (0);
	store = malloc(sizeof(char) * letters);
	if (store == NULL)
		return (0);
	openFile = open(filename, O_RDONLY);
	if (openFile == -1)
	{
		free(store);
		return (0);
	}
	readFile = read(openFile, store, letters);
	if (readFile == -1)
	{
		free(store);
		return (0);
	}
	writeFile = write(STDOUT_FILENO, store, readFile);
	free(store);
	close(openFile);
	if (writeFile == -1)
		return (0);
	return ((ssize_t)writeFile);
}
