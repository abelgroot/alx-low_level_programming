/* _putchar.c */

/**
 * _putchar - Function to write a single character
 * to stdout using write system call
 * @c: input character
 * Return: integer
 */
int _putchar(char c)
{
	int stdout_fd = 1;

	write(stdout_fd, &c, 1);
	return (c);
}

