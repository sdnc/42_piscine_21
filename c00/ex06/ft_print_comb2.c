#include <unistd.h>

void	ft_print_comb2(void);
void	print_array(int a, int b);

void	print_array(int a, int b)
{
	char	array[5];

	array[0] = (a / 10) + '0';
	array[1] = (a % 10) + '0';
	array[2] = ' ';
	array[3] = (b / 10) + '0';
	array[4] = (b % 10) + '0';
	write(1, &array, 5);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	comma[2];

	a = 0;
	b = 1;
	comma[0] = ',';
	comma[1] = ' ';
	while (a < 99)
	{
		while (b < 100)
		{
			print_array(a, b);
			b++;
			if (a != 98)
			{
				write(1, &comma, 2);
			}
		}
		a++;
		b = a + 1;
	}
}
