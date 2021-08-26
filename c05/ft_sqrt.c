//#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while ((i * i) <= nb)
		{
			if ((i * i) == nb)
				return (i);
			else if (i > 46340)
				return (0);
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
		 printf("sqrt of %d is %d\n", -1746, ft_sqrt(-1746));
        printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
        printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
        printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
        printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
        printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
        printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
        printf("sqrt of %d is %d\n", 204375616, ft_sqrt(204375616));
        printf("sqrt of %d is %d\n", 596836962, ft_sqrt(596836962));
        printf("sqrt of %d is %d\n", 182329, ft_sqrt(182329));
        printf("sqrt of %d is %d\n", 969028975, ft_sqrt(969028975));
        printf("sqrt of %d is %d\n", 727920400, ft_sqrt(727920400));
        printf("sqrt of %d is %d\n", 1555049396, ft_sqrt(1555049396));
        printf("sqrt of %d is %d\n", 509585476, ft_sqrt(509585476));
        printf("sqrt of %d is %d\n", 1576107933, ft_sqrt(1576107933));
        printf("sqrt of %d is %d\n", 8803089, ft_sqrt(8803089));
        printf("sqrt of %d is %d\n", 286393319, ft_sqrt(286393319));	
	return (0);
}*/
