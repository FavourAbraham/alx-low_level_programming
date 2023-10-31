#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - append to a file
 * @filename: name of the file
 * @text_content: content
 * Return: Return 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileso, o, write_infile;

	if (filename == NULL)
	{
	return (-1);
	}
	fileso = open(filename, O_WRONLY | O_APPEND);
	if (fileso == -1)
	{
	return (-1);
	}
	if (text_content != NULL)
	{
	for (o = 0; text_content[o]; o++)
	{
};
	write_infile = write(fileso, text_content, o);
	if (write_infile == -1)
	{
	return (-1);
	}
	}
	close(fileso);
	return (1);
}
