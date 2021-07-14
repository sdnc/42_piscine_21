#include "rush_02.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	strlen;

	strlen = 0;
	while (str[strlen])
		strlen++;
	write(1, str, strlen);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	int				cmp;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	cmp = s1[i] - s2[i];
	return (cmp);
}

char	*ft_strdup(char *str, int start, int end)
{
	int		i;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * end - start + 1);
	if (dest == NULL)
		return (0);
	i = 0 - 1;
	while (++i < end - start)
		dest[i] = str[start + i];
	dest[i] = 0;
	return (dest);
}

char	*ft_trim(char *str)
{
	int		start;
	int		end;
	int		idx;
	char	*dest;

	start = 0;
	end = ft_strlen(str) - 1;
	while (is_space(str[start]))
		start++;
	while (is_space(str[end]))
		end--;
	dest = (char *)malloc(sizeof(char) * (end - start + 1 + 1));
	if (dest == NULL)
		return (0);
	idx = 0 - 1;
	while (++idx < end - start + 1)
		dest[idx] = str[start + idx];
	dest[idx] = 0;
	return (dest);
}
