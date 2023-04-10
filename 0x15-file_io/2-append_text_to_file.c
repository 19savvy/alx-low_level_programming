#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file - A function that appends text at the end to the file
 * @filename: The filename to open and append in
 * @text_content: The NULL terminated string to add
 * Return: 1 on success, -1 if the file can not be created, nor written,
 * nor write fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, openFile, writeFile;

	if (filename == NULL)
		return (-1);
	openFile = open(filename, O_RDWR | O_APPEND);
	if (openFile == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(openFile);
		return (1);
	}
	while (text_content[len] != '\0')
		len++;
	writeFile = write(openFile, text_content, len);
	close(openFile);
	if (writeFile == -1)
		return (-1);
	return (1);

}
