#include "rush_02.h"

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	is_key(char *str)
{
	int	i;
	int	state;

	state = 0;
	if (str[0] == '0' && str[1] == 0)
		state = 1;
	i = 0 - 1;
	while (str[++i])
	{
		if (state == 0 && str[i] >= '1' && str[i] <= '9')
			state = 1;
		else if (state == 1 && is_num(str[i]))
			continue ;
		else
			return (0);
	}
	if (i > 39)
		return (0);
	return (1);
}

int	is_value(char *str)
{
	int	i;

	i = 0 - 1;
	while (str[++i])
		if (!is_printable(str[i]))
			return (0);
	return (1);
}
