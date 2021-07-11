#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		c++;
	}
	return (c);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(src));
	if (str == NULL)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main (int argc, char *argv[])
{
	int	i;
	char	*new;

	i = 1;
	while (i < argc)
	{
		new = ft_strdup(argv[i]);
		printf("%s\n", new);
		i++;
	}
	free(new);
	return (0);
}*/
