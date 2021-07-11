#include <stdlib.h>
//#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
int	main(void)
{
	int	*range;
	int	size;

	size = ft_ultimate_range(&range, 35, 1);
	printf("The amount of integers in the range is = %d\n", size);
	if (!range)
	{
		printf("Range is set to NULL\n");
		return (0);
	}
	for (int i = 0; i < size; i++)
		printf("%d ", range[i]);
	printf("\n");
	return (0);
}*/
