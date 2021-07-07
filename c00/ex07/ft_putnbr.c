#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_printchar(char c);

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		ft_printchar('-');
		i = -nb;
	}
	else
	{
		i = nb;
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10);
	}
	ft_printchar(i % 10 + '0');
}
