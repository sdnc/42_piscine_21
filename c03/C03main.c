#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char s1[] = "Nothing to see";
	char s2[] = "Testing";
	char s3[] = "Testing";
	char s4[] = "Testing to compare";
	char dest[] = "Hello";
	char src[] = ", world!";
	char srce[] = "456789";
	char destin[] = "123";
	unsigned int nb = 3;
	char *haystack;
	char *needle;
	char *result_c;
	char *result_ft;

	printf("--------------------\n00 - ft_strcmp\n");
	printf("---Your strcmp function behaviour---\n");
	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", ft_strcmp(s1, s2), ft_strcmp(s2, s1), ft_strcmp(s1, s3), ft_strcmp(s3, s1), ft_strcmp(s2, s3), ft_strcmp(s3, s2));
 	printf("\n\n---The original strcmp function behaviour---\n");
	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d\n", strcmp(s1, s2), strcmp(s2, s1), strcmp(s1, s3), strcmp(s3, s1), strcmp(s2, s3), strcmp(s3, s2));
	
	printf("\n--------------------\n01 - ft_strncmp\n");
	printf("---Your strncmp function behaviour---\n");
	printf("s14: %d, s41: %d, s13: %d, s31: %d, s43: %d, s34: %d", ft_strncmp(s1, s4, 5), ft_strncmp(s4, s1, 5), ft_strncmp(s1, s3, 5), ft_strncmp(s3, s1, 5), ft_strncmp(s4, s3, 5), ft_strncmp(s3, s4, 5));
 	printf("\n\n---The original strncmp function behaviour---\n");
	printf("s14: %d, s41: %d, s13: %d, s31: %d, s43: %d, s34: %d\n", ft_strncmp(s1, s4, 5), ft_strncmp(s4, s1, 5), ft_strncmp(s1, s3, 5), ft_strncmp(s3, s1, 5), ft_strncmp(s4, s3, 5), ft_strncmp(s3, s4, 5));

	printf("--------------------\n02 - ft_strcat\n");
	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s\n-----\n", dest);

	printf("--------------------\n03 - ft_strncat\n");
	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", destin, srce, nb);
	ft_strncat(destin, srce, nb);
	printf("result = %s\n-----\n", destin);

	printf("--------------------\n04 - ft_strstr\n");
	haystack = "Foo Bar Baz";
	needle = "Bar";
	result_c = strstr(haystack, needle);
	result_ft = ft_strstr(haystack, needle);

	printf("-----\nHaystack = Foo Bar Baz\n");
	printf("Needle = Bar\n");
	printf("\n---Your ft_strstr function behaviour---\n");
	printf("%s$\n", result_ft);
	printf("\n---The original strstr function behaviour---\n");
	printf("%s$\n", result_c);
	return (0);
}
