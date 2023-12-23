#include <stdio.h>

char    *ft_strcat(char *dest, char *src);

int	main(void)
{
	char src[] = "Ecole";
	char dest[] = "42_";
	printf("%s\n", ft_strcat(dest, src));
}