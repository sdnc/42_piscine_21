#include "rush_02.h"
#include <stdlib.h>
#include <unistd.h>

t_dict	*get_dict(char *file)
{
	char	*dict_buf;
	char	**dict_split_lines;
	int		dict_size;
	t_dict	*dictonary;

	dict_buf = get_dict_buf(file);
	if (dict_buf == NULL)
		return (0);
	dict_split_lines = ft_split(dict_buf, (char *)"\n");
	if (dict_split_lines == NULL)
		return (0);
	free(dict_buf);
	dict_size = 0;
	while (dict_split_lines[dict_size])
		dict_size++;
	if (!(trim_dict(dict_split_lines, dict_size)))
		return (0);
	dictonary = dict_init(dict_split_lines, dict_size);
	if (dictonary == NULL)
		continuefunc1(dict_split_lines, dict_size);
	free_dict_split(dict_split_lines, dict_size);
	return (dictonary);
}

int	continuefunc1(char **dict_split_lines, int dict_size)
{
	t_dict	*dictonary;

	dictonary = NULL;
	free_dict(dictonary);
	free_dict_split(dict_split_lines, dict_size);
	return (0);
}

char	*make_digit(int digit)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(sizeof(char) * digit + 1);
	dest[0] = '1';
	i = 1 - 1;
	while (++i < digit)
		dest[i] = '0';
	dest[i] = 0;
	return (dest);
}

void	get_solution(char *value, t_dict *dict)
{
	int		start;
	int		end;
	int		k_count;
	char	*solver;

	start = 0;
	end = ft_strlen(value);
	k_count = (end - 1) / 3;
	end = start + (end - 1) % 3 + 1;
	while (k_count >= 0)
	{
		solver = ft_strdup(value, start, end);
		if (solver == NULL)
			return ;
		print_num(solver, end - start, dict);
		if (k_count && ft_strcmp(solver, (char *)"000"))
			print_digit(k_count, dict);
		start = end;
		end = end + 3;
		k_count--;
		free(solver);
	}
	write(1, "\n", 1);
}
