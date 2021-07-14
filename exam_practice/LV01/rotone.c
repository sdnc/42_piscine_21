#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	while (*s)
		{
			if ((*s >= 'a' && *s < 'z') || (*s >= 'A' && *s < 'Z'))
				ft_putchar(*s + 1);
			else if (*s == 'z' || *s == 'Z')
				ft_putchar(*s - 25);
			else 
				ft_putchar(*s);
			s++;
		}
}

int	main(int ac, char *av[])
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}
