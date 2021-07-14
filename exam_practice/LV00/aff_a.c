#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac != 2)
	{
		ft_putchar('a');
	}
	else
	{
		while (av[1][i])
		{
			if (av[1][i] == 'a')
			{
				ft_putchar('a');
				return (0);
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
