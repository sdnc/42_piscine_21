#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	if (min >= max)
		tab = NULL;
	while (max > min)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	i;
	int	*ptr;
	
	i = 0;
	ptr = ft_range(1,14343);
	while (ptr[i])
	{
		printf("%d, ", ptr[i]);
		i++;
	}
	return (0);
}*/
