//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(-3, 3));
	printf("%d\n", ft_recursive_power(5, -11));
	printf("%d\n", ft_recursive_power(9, 8));
	printf("%d\n", ft_recursive_power(12, 4));
}
*/
