#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * create_file - a function that creates a file.
 * @filename: file to be created
 * @text_content: content to be added to the text
 * Return: 1 if successful and -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int openFile;
	ssize_t len, bytesWritten;

	if (filename == NULL)
		return (-1);
	openFile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (openFile == -1)
		return (-1);
	if (text_content == NULL)
	{
		len = strlen(text_content);
		bytesWritten = write(openFile, text_content, len);
		if (bytesWritten != len)
		{
			close(openFile);
			return (-1);
		}
	}
	close(openFile);
	return (1);
}
