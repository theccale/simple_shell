#include "shell.h"

/**
* wr_strlen - returns the length of a string
* @s: the string to check
*
* Return: in integer, the length of string
*/
int wr_strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
* compr_str - compares the length of two strings and return the diff.
* @fs: the first string
* @ss: the second string
*
* Return: negative if fs < ss
* positive if fs > ss,
* zero if fs == ss
*/
int compr_str(char *fs, char *ss)
{
	while (*fs && *ss)
	{
		if (*fs != *ss)
			return (*fs - *ss);
		fs++;
		ss++;
	}
	if (*fs == *ss)
		return (0);
	else
		return (*fs < *ss ? -1 : 1);
}

/**
* check_ini_a - checks if the string needle starts with haystack
* @haystack: the string to search
* @needle: the start substring to find
*
* Return: address
*/
char check_ini_a(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
* cat_strg - concatenates two strings
* @dest: the destination buffer
* @src: the source buffer
* Return: pointer to destination buffer
*/
char *cat_strg(char *dest, char *src)
{
	char *onrn = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (onrn);

}

