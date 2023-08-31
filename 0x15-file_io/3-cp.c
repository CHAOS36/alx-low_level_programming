#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffet;

	buffet = malloc(sizeof(char) * 1024);

	if (buffet == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffet);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int cok;

	cok = close(fd);

	if (cok == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int form, tod, rave, w;
	char *buffet;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffet = create_buffer(argv[2]);
	form = open(argv[1], O_RDONLY);
	rave = read(form, buffet, 1024);
	tod = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (form == -1 || rave == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffet);
			exit(98);
		}

		w = write(tod, buffet, rave);
		if (tod == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffet);
			exit(99);
		}

		rave = read(form, buffet, 1024);
		tod = open(argv[2], O_WRONLY | O_APPEND);

	} while (rave > 0);

	free(buffet);
	close_file(form);
	close_file(tod);

	return (0);
}

