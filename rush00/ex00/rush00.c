extern	void	ft_putchar(char c);

void	first_last_rows(int width)
{
	int	iter_width;

	iter_width = 1;
	while (iter_width <= width)
	{
		if (iter_width == 1 || iter_width == width)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		iter_width++;
	}
	ft_putchar('\n');
}

void	middle_rows(int width)
{
	int	iter_width;

	iter_width = 1;
	while (iter_width <= width)
	{
		if (iter_width == 1 || iter_width == width)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		iter_width++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	iter_height;

	iter_height = 1;
	while (iter_height <= y)
	{
		if (iter_height == 1 || iter_height == y)
		{
			first_last_rows(x);
		}
		else
		{
			middle_rows(x);
		}
		iter_height++;
	}
}
