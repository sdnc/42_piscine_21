//#include <stdio.h>

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

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(45));
	printf("%d\n", ft_find_next_prime(126));
	printf("%d\n", ft_find_next_prime(5435346));
	return (0);
}*/
