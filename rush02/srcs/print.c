#include "rush_02.h"
#include <unistd.h>
#include <stdlib.h>

void	print_one(char *str, t_dict *dict)
{
	int		i;
	char	*temp;

	temp = ft_strdup(str, 0, 1);
	i = 0 - 1;
	while (++i < dict->size)
	{
		if (!(ft_strcmp(temp, dict->key[i])))
		{
			if (!g_flag || temp[0] != '0')
			{
				if (g_flag & 0x1)
					write(1, " ", 1);
				ft_putstr(dict->value[i]);
				g_flag |= 0x1;
			}
			free(temp);
			return ;
		}
	}
}

void	print_ten(char *str, t_dict *dict, char split)
{
	int		i;
	char	*temp;

	if (str[0] == '0')
	{
		print_one(str + 1, dict);
		return ;
	}
	i = 0 - 1;
	while (++i < dict->size)
	{
		if (!(ft_strcmp(str, dict->key[i])))
		{
			if (g_flag & 0x1)
				write(1, &split, 1);
			ft_putstr(dict->value[i]);
			g_flag |= 0x1;
			return ;
		}
	}
	temp = ft_strdup(str, 0, 2);
	temp[1] = '0';
	print_ten(temp, dict, ' ');
	print_one(str + 1, dict);
	free(temp);
}

void	print_hundread(char *str, t_dict *dict)
{
	int		i;
	char	*temp;

	if (str[0] == '0')
	{
		print_ten(str + 1, dict, ' ');
		return ;
	}
	i = 0 - 1;
	temp = make_digit(3);
	while (++i < dict->size)
	{
		if (!(ft_strcmp(temp, dict->key[i])))
		{
			print_one(str, dict);
			if (g_flag & 0x1)
				write(1, " ", 1);
			ft_putstr(dict->value[i]);
			g_flag |= 0x1;
			free(temp);
			print_ten(str + 1, dict, ' ');
			return ;
		}
	}
}

void	print_num(char *value, int ref, t_dict *dict)
{
	if (ref == 1)
		print_one(value, dict);
	else if (ref == 2)
		print_ten(value, dict, ' ');
	else if (ref == 3)
		print_hundread(value, dict);
}

void	print_digit(int ref, t_dict *dict)
{
	int		i;
	char	*digit;

	digit = make_digit(ref * 3 + 1);
	i = 0 - 1;
	while (++i < dict->size)
	{
		if (!(ft_strcmp(digit, dict->key[i])))
		{
			if (g_flag & 0x1)
				write(1, " ", 1);
			ft_putstr(dict->value[i]);
			g_flag |= 0x1;
			free(digit);
			return ;
		}
	}
}
