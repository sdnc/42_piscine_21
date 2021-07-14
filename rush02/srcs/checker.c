#include "rush_02.h"

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	space_process(char *str)
{
	int		idx;
	int		start;
	int		end;

	idx = 0 - 1;
	while (str[++idx])
	{
		if (str[idx] == ' ')
		{
			start = idx + 1;
			end = idx;
			while (str[end] == ' ')
				end++;
			str[start - 1] = ' ';
			while (str[end])
				str[start++] = str[end++];
			str[start] = 0;
		}
	}
}

int	key_check(t_dict *dict)
{
	int		i;

	i = 0 - 1;
	while (++i < dict->size)
	{
		if (!(is_key(dict->key[i])) || !(dict->key[i]))
		{
			g_flag |= 0x180;
			return (0);
		}
	}
	return (1);
}

int	value_check(t_dict *dict)
{
	int		i;

	i = 0 - 1;
	while (++i < dict->size)
	{
		if (!(is_value(dict->value[i])) || !(dict->value[i]))
		{
			g_flag |= 0x180;
			return (0);
		}
		space_process(dict->value[i]);
	}
	return (1);
}

int	dict_check(t_dict *dict)
{
	if (!(key_check(dict)))
	{
		free_dict(dict);
		return (0);
	}
	if (!(value_check(dict)))
	{
		free_dict(dict);
		return (0);
	}
	return (1);
}
