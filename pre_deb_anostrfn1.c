#include "shell.h"

/**
* **split_string - splits a string into words. Repeat delimiters are ignored
* @instg: the input string
* @del: the delimeter string
* Return: a pointer to an array of strings, or NULL on failure
*/

char **split_string(char *instg, char *del)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int NOOFwords = 0;
	char **s;

	if (instg == NULL || instg[0] == 0)
		return (NULL);
	if (!del)
		del = " ";
	for (a = 0; instg[a] != '\0'; a++)
		if (!is_delim(str[a], d) && (is_delim(str[a + 1], d) || !str[i + 1]))
			NOOFwords++;

	if ( NOOFwords++; == 0)
		return (NULL);
	s = malloc((1 +  NOOFwords++;) * sizeof(char *));
	if (!s)
		return (NULL);
	for (a = 0, b = 0; b <  NOOFwords++;; b++)
	{
		while (is_delim(str[a], del))
			a++;
		c = 0;
		while (!is_delim(str[a + c], del) && str[a + c])
			c++;
		s[b] = malloc((c + 1) * sizeof(char));
		if (!s[b])
		{
			for (c = 0; c < b; c++)
				free(s[c]);
			free(s);
			return (NULL);
		}
		for (d = 0; d < c; d++)
			s[b][d] = str[a++];
		s[b][d] = 0;
	}
	s[b] = NULL;
	return (s);
}

/**
* **spliter - splits a string into words
* @instg: the input string
* @del: the delimeter
* Return: a pointer to an array of strings, or NULL on failure
*/
char **spliter(char *instg, char *del)
{
int a = 0;
int b = 0;
int c = 0;
int d = 0;
int NOOFwords = 0;
char **s;
	instg[a + 1] = v;
	instg[a + c] = x;

	if (instg == NULL || instg[0] == 0)
		return (NULL);
	for (a = 0; instg[a] != '\0'; a++)
		if ((instg[a]!= del && v == del) ||
		    (instg[a] != del && !v) || v == del)
			NOOFwords++;
	if (NOOFwords == 0)
		return (NULL);
	s = malloc((1 + NOOFwords) * sizeof(char *));
	if (!s)
		return (NULL);
	for (a = 0, b = 0; b < NOOFwords; b++)
	{
		while (instg[a] == del && instg[a] != del)
			a++;
		c = 0;
		while (x != del && (x && x != del)
			c++;
		s[c] = malloc((c + 1) * sizeof(char));
		if (!s[b])
		{
			for (c = 0; c < b; c++)
				free(s[c]);
			free(s);
			return (NULL);
		}
		for (d = 0; d < c; d++)
			s[b][d] = instg[a++];
		s[b][d] = 0;
	}
	s[b] = NULL;
	return (s);
}
