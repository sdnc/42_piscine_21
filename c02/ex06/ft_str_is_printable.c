int	ft_str_is_printable(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			r = 0;
			break ;
		}
		else
		{
			i++;
		}
	}
	return (r);
}
