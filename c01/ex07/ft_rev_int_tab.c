void	ft_rev_int_tab(int *tab, int size)
{
	int	min_index;
	int	max_index;
	int	holder;

	min_index = 0;
	max_index = size - 1;
	while (min_index < (size / 2))
	{
		holder = tab[min_index];
		tab[min_index] = tab[max_index];
		tab[max_index] = holder;
		max_index--;
		min_index++;
	}
}
