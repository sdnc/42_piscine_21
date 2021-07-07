void	ft_swapvalue(int *a, int *b)
{
	int	holder;

	holder = *a;
	*a = *b;
	*b = holder;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	r;
	int	i;

	r = 0;
	while (r < size - 1)
	{
		i = 0;
		while (i < (size - 1) - r)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swapvalue(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		r++;
	}
}
