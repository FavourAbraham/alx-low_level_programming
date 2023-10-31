#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - function create a file
 * @filename: name of file
 * @text_content: content to add
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int iterator = 0, write_infile;
	int fileso = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileso == -1)
	{
	return (-1);
	}
	if (text_content == NULL)
	{
	text_content = " ";
	}
	while (text_content[iterator] != '\0')
	{
	iterator++;
	}
write_infile = write(fileso, text_content, iterator);
	if (write_infile == -1)
	{
	return (-1);
	}
	close(fileso);
	return (1);
}
