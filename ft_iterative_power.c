//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			res *= nb;
			power--;
		}
	}
	return (res);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(5, 4));
	printf("%d\n", ft_iterative_power(2, 8));
	printf("%d\n", ft_iterative_power(8, 6));
	return (0);
}
*/
