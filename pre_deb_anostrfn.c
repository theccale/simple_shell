#include "shell.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned,
* and errno is set appropriately.
*/
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
/**
* copy_strg - copies a string from destination to a new source
* @nwsrc: the new source from which the string is to copied
* @oldsrc: the source
*
* Return: pointer to destination
*/
char *copy_strg(char *nwsrc, char *oldsrc)
{
	int i = 0;

	if (nwsrc == oldsrc || oldsrc == 0)
		return (nwsrc);
	while (oldsrc[i])
	{
		nwsrc[i] = oldsrc[i];
		i++;
	}
	nwsrc[i] = 0;
	return (nwsrc);
}

/**
* string_dupl - duplicates a string
* @str: the string to duplicate
*
* Return: pointer to the duplicated string
*/
char *string_dupl(const char *str)
{
	int length = 0;
	char *dupl;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	dupl = malloc(sizeof(char) * (length + 1));
	if (!dupl)
		return (NULL);
	for (length++; length--;)
		dupl[length] = *--str;
	return (dupl);
}

/**
* print_input - prints an input string by the user
*@str: the string to be printed
*
* Return: Nothing
*/
void print_input(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}


