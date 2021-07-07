#include <stdio.h>

extern	void	ft_ft(int *nbr);
extern	void	ft_ultimate_ft(int *********nbr);
extern	void	ft_swap(int *a, int *b);
extern	void	ft_div_mod(int a, int b, int *div, int *mod);
extern	void	ft_ultimate_div_mod(int *a, int *b);
extern	void	ft_putstr(char *str);
extern	int		ft_strlen(char *str);
extern	void	ft_rev_int_tab(int *tab, int size);
extern	void	ft_sort_int_tab(int *tab, int size);
int	main(void)
{
	int a;
	int b = 3672;
	int div;
	int mod;
	char *str = "Hello world!";
	int	arr[10];	
	int nbr;
	int *********pnbr;
	int ********pnbr2;
	int *******pnbr3;
	int ******pnbr4;
	int *****pnbr5;
	int ****pnbr6;
	int ***pnbr7;
	int **pnbr8;
	int *pnbr9;

	pnbr9 = &nbr;
	pnbr8 = &pnbr9;
	pnbr7 = &pnbr8;
	pnbr6 = &pnbr7;
	pnbr5 = &pnbr6;
	pnbr4 = &pnbr5;
	pnbr3 = &pnbr4;
	pnbr2 = &pnbr3;
	pnbr = &pnbr2;
	
	printf("--------------------\nft_ft\n");

	ft_ft(&a);
	printf("%d", a);

	printf("\n\n--------------------\nft_ultimate_ft\n");

	ft_ultimate_ft(pnbr);	
	printf("%d", nbr);
	
	printf("\n\n--------------------\nft_swap\n");
	
	ft_swap(&a, &b);	
	printf("%d\n%d", a, b);
	
	printf("\n\n--------------------\nft_div_mod\n");
	
	a = 10;
	b = 5;
	ft_div_mod(a, b, &div, &mod);	
	printf("%d\n%d", div, mod);

	printf("\n\n--------------------\nft_ultimate_div_mod\n");
	
	a = 20;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d", a, b);

	printf("\n\n--------------------\nft_putstr\n");
	
	ft_putstr(str);
	
	printf("\n\n--------------------\nft_strlen\n");

	printf("%d", ft_strlen(str));

	printf("\n\n--------------------\nft_rev_int_tab\n");
	
	for(int j = 0; j < 10; j++)
	{
		arr[j] = 25 + (j * 3);
	}

	ft_rev_int_tab(arr, 10);

	for(int k = 0; k < 10; k++)
	{
		printf("%d ", arr[k]);	
	}
	
	printf("\n\n--------------------\nft_sort_int_tab\n");

	ft_sort_int_tab(arr, 10);

	for(int k = 0; k < 10; k++)	
	{
		printf("%d ", arr[k]);	
	}

	printf("\n\n");

}
