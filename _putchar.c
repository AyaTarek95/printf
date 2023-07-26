#include <unistd.h>
/**
 * _putchar - prints a char c to stdout
 * @c: char to print
 *
 * Return: always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
