#include <stdlib.h>
#include "ft_stock_str.h"
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (str == NULL)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{	
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = malloc(sizeof(char) * ft_strlen((av[i]) + 1));
		if (tab[i].str == NULL)
			return (NULL);
		tab[i].str = av[i];
		tab[i].copy = malloc(sizeof(char) * ft_strlen((av[i]) + 1));
		if (tab[i].copy == NULL)
			return (NULL);
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
