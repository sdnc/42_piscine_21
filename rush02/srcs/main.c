#include "rush_02.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void	print_dict_error(char *file)
{
	t_dict	*dictonary;

	dictonary = get_dict(file);
	if (!(dictonary == get_dict(file)))
	{
		if (!(g_flag & 0x2000))
			free_dict(dictonary);
		return ;
	}
	if (!(dict_check(dictonary)))
	{
		free_dict(dictonary);
		return ;
	}
	free_dict(dictonary);
	write(1, "Error\n", 6);
}

void	continuefunc(char *file, char*value)
{	
	t_dict	*dictonary;

	dictonary = get_dict(file);
	value = ft_trim(value);
	if (is_key(value))
		get_solution(value, dictonary);
	else
		g_flag = 0x1000;
	 free(value);
	 free_dict(dictonary);
}

void	solve(char *file, char *value)
{
	t_dict	*dictonary;

	dictonary = get_dict(file);
	if (!(dictonary))
	{
		if (!(g_flag & 0x2000))
			free_dict(dictonary);
		return ;
	}
	if (!(dict_check(dictonary)))
	{	
		free_dict(dictonary);
		return ;
	}
	value = ft_trim(value);
	if (!(value))
	{
		g_flag |= 0x1100;
		return ;
	}
	continuefunc(file, value);
}

int	main(int argc, char *argv[])
{
	g_flag = 0;
	if (argc == 1)
		print_dict_error("numbers.dict");
	else if (argc == 2)
		solve("numbers.dict", argv[1]);
	else if (argc == 3)
		solve(argv[1], argv[2]);
	else
	{
		write(1, "Arguments Error\n", 16);
		return (0);
	}
	if (g_flag & 0x180)
		write(1, "Dict Error\n", 11);
	if (g_flag & 0x1000)
		write(1, "Error\n", 6);
	return (0);
}
