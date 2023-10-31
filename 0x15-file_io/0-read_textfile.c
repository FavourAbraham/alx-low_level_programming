#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - read text file
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: if filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t myfiles;
	ssize_t only_read, only_write;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	myfiles = open(filename, O_RDONLY);

	if (myfiles == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	only_read = read(myfiles, buffer, letters);
	only_write = write(STDOUT_FILENO, buffer, only_read);
	close(myfiles);
	free(buffer);
	return (only_write);
}
