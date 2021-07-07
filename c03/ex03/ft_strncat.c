char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
		i++;
	while (src[c] != '\0' && nb > 0)
	{
		dest[i] = src[c];
		c++;
		i++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
