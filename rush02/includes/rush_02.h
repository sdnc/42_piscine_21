#ifndef RUSH_02_H
# define RUSH_02_H

# define BUF_SIZE 4096

typedef struct s_dict
{
	int		size;
	char	**key;
	char	**value;
}				t_dict;

int				g_flag;

int				main(int argc, char *argv[]);
void			solve(char *dict, char *value);
void			get_solution(char *value, t_dict *dict);

void			ft_putstr(char *str);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strdup(char *str, int st, int en);
char			*ft_trim(char *str);

int				is_num(char c);
int				is_printable(char c);
int				is_space(char c);
int				is_key(char *str);
int				is_value(char *str);

char			**ft_split(char *str, char *sep);

char			*read_buf(char *dict, char *dest);
char			*get_dict_buf(char *dict);
int				trim_dict(char **split, int size);
int				key_val_init(char *str, int num, t_dict *dict);
t_dict			*dict_init(char **dict_split_lines, int dict_size);
int				second_flag_care(void);
int				third_flag_care(void);

void			print_one(char *str, t_dict *dict);
void			print_ten(char *str, t_dict *dict, char split);
void			print_hundread(char *str, t_dict *dict);
void			print_num(char *value, int ref, t_dict *dict);
void			print_digit(int ref, t_dict *dict);

void			free_key(t_dict *dict);
void			free_value(t_dict *dict);
void			free_dict(t_dict *dict);
void			free_dict_split(char **split, int size);

void			ft_swap(char *a, char *b);
int				dict_check(t_dict *dict);

t_dict			*get_dict(char *dict);
char			*make_digit(int digit);
void			get_solution(char *value, t_dict *dict);
int				continuefunc1(char **dict_split_lines, int dict_size);

#endif
