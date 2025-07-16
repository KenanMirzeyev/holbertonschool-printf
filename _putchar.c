#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: character to print
 * Return: number of bytes written
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}


