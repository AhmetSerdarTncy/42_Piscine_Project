#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	printf("%d\n", ft_strncmp("Ecole", "42kocaeli", 5));
	printf("%d\n", ft_strncmp("42kocaeli", "Ecole", 5));
	printf("%d", ft_strncmp("42Ecole", "42Ecole", 5));
}