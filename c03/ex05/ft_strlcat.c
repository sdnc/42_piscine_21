unsigned int	ft_checkstrlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	d_res;
	unsigned int	s_red;	
	
	i = ft_checkstrlen(dest);
	c = 0;
	res_d = ft_checkstrlen(dest);
	res_s = ft_checkstrlen(src);
	
}
