#include "shell.h"
/**
* user_friendly - returns true if shell is interactive with user
* @info: struct address#
*
* Return: 1 if interactive mode, 0 otherwise
*/
int user_friendly(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}
_atoi(char *s)
{
	int i = 1;
	int sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
