#include "main.h"
/**
 * main - This is a function  that copies file's content.
 * @argc: it's the argument count.
 * @argv: it's the argument vector.
 * Return: Return 0 in succes.
 */
int main(int argc, char *argv[])
{
<<<<<<< HEAD
	int fst, tec, filr, fil;
=======
	int fst, tec, filr, flz;
>>>>>>> 02039bf2b54403eb6f50367dd9a2a0c3ae681772
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fst = open(argv[1], O_RDONLY);
	if (fst == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	}
	tec = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (tec == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	}
	while ((filr = read(fst, buffer, 1024)) > 0)
	{
<<<<<<< HEAD
		fil = write(tec, buffer, filr);
		if (fil == -1)
=======
		flz = write(tec, buffer, filr);
		if (flz == -1)
>>>>>>> 02039bf2b54403eb6f50367dd9a2a0c3ae681772
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
	if (close(tec) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tec), exit(100);
	return (0);
}
