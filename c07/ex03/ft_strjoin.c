#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += (size - 1) * ft_strlen(sep) + 1;
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total;
	char	*megastr;

	i = 0;
	total = ft_total_len(size, strs, sep);
	megastr = malloc(sizeof(char) * total);
	if (megastr == NULL)
		return (0);
	if (size == 0)
		return (megastr);
	while (i < size)
	{
		ft_strcat(megastr, strs[i]);
		if (i < size - 1)
			ft_strcat(megastr, sep);
		i++;
	}	
	return (megastr);
}
/*
int	main(void)
{
	char	*tab[4];

	tab[0] = "Eat";
	tab[1] = "Sleep";
	tab[2] = "Code";
	tab[3] = "Repeat";
	printf("%s", ft_strjoin(4, tab, "LOL"));
	printf(" Maaan, if this sigaborts again, I swear to God...");
	return (0);
}*/
