#include "rush_02.h"
#include <stdlib.h>

int	check_sep(char c, char *sep)
{
	unsigned int	i;

	i = 0 - 1;
	while (sep[++i])
		if (sep[i] == c)
			return (1);
	return (0);
}

int	get_size(char *str, char *sep)
{
	int	i;
	int	status;
	int	cnt;

	i = 0 - 1;
	status = 0;
	cnt = 0;
	while (str[++i])
	{
		if (!status && !(check_sep(str[i], sep)))
		{
			status = 1;
			cnt++;
		}
		else if (status && check_sep(str[i], sep))
			status = 0;
	}
	return (cnt);
}

char	**make_split(char **dest, char *str, char *sep, int total_cnt)
{
	int	start;
	int	end;
	int	cnt;
	int	i;

	start = 0;
	cnt = 0 - 1;
	while (++cnt < total_cnt)
	{
		while (check_sep(str[start], sep) && str[start])
			start++;
		end = start;
		while (!check_sep(str[end], sep) && str[end])
			end++;
		dest[cnt] = (char *)malloc(sizeof(char) * (end - start) + 1);
		if (dest[cnt] == NULL)
			return (0);
		i = 0 - 1;
		while (++i < end - start)
			dest[cnt][i] = str[start + i];
		dest[cnt][i] = 0;
		start = end;
	}
	dest[cnt] = 0;
	return (dest);
}

void	free_split(int cnt, char **split)
{
	int	i;

	i = 0 - 1;
	while (++i < cnt)
		free(split[i]);
	free(split);
}

char	**ft_split(char *str, char *sep)
{
	int		cnt;
	char	**split;

	cnt = get_size(str, sep);
	split = (char **)malloc(sizeof(char *) * cnt + 1);
	if (split == NULL)
		return (0);
	split = make_split(split, str, sep, cnt);
	if (split == NULL)
	{
		free_split(cnt, split);
		return (0);
	}
	return (split);
}
