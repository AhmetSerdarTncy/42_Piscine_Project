#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
    char	dest[] = "42";
	char	src[] = "Kocaeli";

	printf("%s\n", ft_strcpy(dest, src));
}