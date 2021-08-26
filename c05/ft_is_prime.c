int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb < 2)
		return (0);
	while (c <= nb / c)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}
