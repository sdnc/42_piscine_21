#include <unistd.h>
int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*rev_print(char *str)
{
	int	i;

	i = str_len(str);
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write (1, "\n", 1);
	return (str);
}

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	rev_print(av[1]);
	return (0);
}
