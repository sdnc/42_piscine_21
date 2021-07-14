#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*checkdup(char	*str)
{
	int	i;
	int	iter;
	int	dup;

	i = 0;
	dup = 0;
	while (str[i])
	{
		iter = 1;
		while (str[i + iter])
		{
			if ((str[i] - str[i + iter]) == 0)
			{
				str[i + iter] = str[i + iter + 1];
				dup++;
			}
			iter++;
		}
		i++;
	}
	if (dup > 1)
		checkdup(str);
	str[i] = '\0';
	return (str);
}

int	main(int ac, char *av[])
{
	char	*str;

	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}	
	str = ft_strcat(av[1], av[2]);
	ft_putstr("Merging the strings together: ");
	ft_putstr(str);
	ft_putchar('\n');
	str = checkdup(str);
	ft_putstr("After removing duplicates: ");
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
