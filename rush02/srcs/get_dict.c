#include "rush_02.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*read_buf(char *file, char *dest)
{
	int		i;
	int		j;
	char	buf[BUF_SIZE];
	int		buf_len;
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		g_flag |= 0x2100;
		return (0);
	}
	j = 0;
	buf_len = read(fd, buf, BUF_SIZE);
	i = 0 - 1;
	while (buf_len > i)
	{
		while (++i < buf_len)
			dest[i + j * BUF_SIZE] = buf[i];
		j++;
	}
	close(fd);
	return (dest);
}

char	*get_dict_buf(char *file)
{
	char	buf[BUF_SIZE];
	int		buf_len;
	int		size;
	int		fd;
	char	*dest;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		g_flag = g_flag | 0x2100;
		return (0);
	}
	size = 0;
	buf_len = read(fd, buf, BUF_SIZE);
	while (buf_len > size)
		size += buf_len;
	close(fd);
	dest = (char *)malloc(sizeof(char) * size + 1);
	if (dest == NULL)
		return (0);
	dest = read_buf(file, dest);
	dest[size] = 0;
	return (dest);
}

int	trim_dict(char **split, int size)
{
	int		i;
	char	*temp;

	i = 0 - 1;
	while (++i < size)
	{
		temp = ft_trim(split[i]);
		if (temp == NULL)
			return (0);
		free(split[i]);
		split[i] = ft_strdup(temp, 0, ft_strlen(temp));
		if (split[i] == NULL)
		{
			free_dict_split(split, size);
			free(temp);
			return (0);
		}
		free(temp);
	}
	return (1);
}

int	key_val_init(char *line, int num, t_dict *dict)
{
	int		start;
	int		end;
	char	*tmp;

	start = 0;
	end = start;
	while (line[end] && line[end] != ':')
		end++;
	tmp = ft_strdup(line, start, end);
	if (tmp == NULL)
		return (0);
	dict->key[num] = ft_trim(tmp);
	free(tmp);
	start = end + 1;
	end = start;
	while (line[end])
		end++;
	tmp = ft_strdup(line, start, end);
	if (tmp == NULL)
		return (0);
	dict->value[num] = ft_trim(tmp);
	free(tmp);
	return (1);
}

t_dict	*dict_init(char **dict_split_lines, int dict_size)
{
	t_dict	*new_dict;
	int		i;

	new_dict = (t_dict *)malloc(sizeof(t_dict) * 1);
	if (new_dict == NULL)
	{
		g_flag |= 0x10;
		return (0);
	}
	new_dict->size = dict_size;
	new_dict->key = (char **)malloc(sizeof(char *) * dict_size);
	if (new_dict->key == NULL)
	{
		second_flag_care();
	}
	new_dict->value = (char **)malloc(sizeof(char *) * dict_size);
	if (new_dict->value == NULL)
	{
		third_flag_care();
	}
	i = 0 - 1;
	while (++i < dict_size)
		if (!(key_val_init(dict_split_lines[i], i, new_dict)))
			g_flag |= 0x80;
	return (new_dict);
}
