#include "main.h"
/**
 * main - This is a function  that copies file's content.
 * @argc: it's the argument count.
 * @argv: it's the argument vector.
 * Return: Return 0 in succes.
 */
int main(int argc, char *argv[])
{
	int fst, fil, filr, filw;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fst = open(argv[1], O_RDONLY);
	if (fst == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	}
	fil = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fil == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	}
	while ((filr = read(fst, buffer, 1024)) > 0)
	{
		filw = write(fil, buffer, filr);
		if (filw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (filr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	}
	if (close(fst) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fst), exit(100);
	if (close(fil) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fil), exit(100);
	return (0);
}
