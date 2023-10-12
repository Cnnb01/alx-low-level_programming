#include "main.h"
/**
*main - entry point
*@argc: the number of command-line arguments
*@argv: an array containing the command-line arguments
*Return: 0 on success, error codes on failure
*/
int main(int argc, char *argv[])
{
int file_from, file_to;
char buffer[1024];
ssize_t b_read, written;
if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to \n");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(2, "Error: Can't read from %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
{
dprintf(2, "Error: cant write to %s\n", argv[2]);
close(file_from);
exit(99);
}
while ((b_read = read(file_from, buffer, 1024)) > 0)
{
written = write(file_to, buffer, b_read);
if (written != b_read)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
close(file_from);
close(file_to);
exit(99);
}
}
return (0);
}
