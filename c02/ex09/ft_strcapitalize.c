char	*ft_strcapitalize(char *str)
{
	int	i;
	int	letter;

	i = 0;
	letter = 1;
	while (str[i] != '\0')
	{
		if (letter == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			letter++;
		}
		else if (letter > 1 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			   || (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			letter = 1;
		else
			letter++;
		i++;
	}
	return (str);
}
