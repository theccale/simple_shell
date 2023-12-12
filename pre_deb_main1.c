#include "shell.h"

/**
 * shell_exit - exits the shell
 * @info: Struct for prototypes
 *  Return: (0) if info.argv[0] != "exit"
 */
int shell_exit(info_t *info)
{
	int mkc;

	if (info->argv[1])  /* If there is an exit arguement */
	{
		mkc = _erratoi(info->argv[1]);
		if (mkc == -1)
		{
			info->status = 2;
			print_error(info, "Illegal number: ");
eputs(info->argv[1]);
			_eputchar('\n');
			return (1);
		}
		info->err_num = _erratoi(info->argv[1]);
		return (-2);
	}
	info->err_num = -1;
	return (-2);
}

/**
 * chg_dir - changes the current directory of the process
 * @info: Struct for prototypes
 *  Return: Always 0
 */
int  chg_dir(info_t *info)
{
	char *s, *dir, buffer[1024];
	int chang_dir;

	s = getcwd(buffer, 1024);
	if (!s)
		_puts("TODO: >>getcwd failure emsg here<<\n");
	if (!info->argv[1])
	{
		dir = _getenv(info, "HOME=");
		if (!dir)
			 chang_dir = /* TODO: what should this be? */
				chang_dir((dir = _getenv(info, "PWD=")) ? dir : "/");
		else
			chang_dir = chdir(dir);
	}
	else if (_strcmp(info->argv[1], "-") == 0)
	{
		if (!_getenv(info, "OLDPWD="))
		{
			_puts(s);
			_putchar('\n');
			return (1);
		}
		_puts(_getenv(info, "OLDPWD=")), _putchar('\n');
		chdir_ret = /* TODO: what should this be? */
			chdir((dir = _getenv(info, "OLDPWD=")) ? dir : "/");
	}
	else
		chdir_ret = chdir(info->argv[1]);
	if (chdir_ret == -1)
	{
		print_error(info, "can't cd to ");
		_eputs(info->argv[1]), _eputchar('\n');
	}
	else
	{
		_setenv(info, "OLDPWD", _getenv(info, "PWD="));
		_setenv(info, "PWD", getcwd(buffer, 1024));
	}
	return (0);
}
/**
 * _myhelp - changes the current directory of the process
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 *  Return: Always 0
 */
int _myhelp(info_t *info)
{
	char **arg_array;

	arg_array = info->argv;
	_puts("help call works. Function not yet implemented \n");
	if (0)
		_puts(*arg_array); /* temp att_unused workaround */
	return (0);
}

