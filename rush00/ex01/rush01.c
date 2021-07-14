extern	void	ft_putchar(char c);

void	first_row(int width)
{
	int	iter_width;

	iter_width = 1;
	while (iter_width <= width)
	{
		if (iter_width == 1)
		{
			ft_putchar('/');
		}
		else if (iter_width == width)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
		iter_width++;
	}
	ft_putchar('\n');
}

void	middle_row(int width)
{
	int	iter_width;

	iter_width = 1;
	while (iter_width <= width)
	{
		if (iter_width == 1 || iter_width == width)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		iter_width++;
	}
	ft_putchar('\n');
}

void	last_row(int width)
{
	int	iter_width;

	iter_width = 1;
	while (iter_width <= width)
	{
		if (iter_width == 1)
		{
			ft_putchar('\\');
		}
		else if (iter_width == width)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
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
		if (iter_height == 1)
		{
			first_row(x);
		}
		else if (iter_height == y)
		{
			last_row(x);
		}
		else
		{
			middle_row(x);
		}
		iter_height++;
	}
}
