#include <stdio.h>

char    *ft_strncpy(char    *dest, char *src, unsigned int  n);

int	main(void)
{
	char	dest[99] = "42";
	char    src[99] = "Kocaeli";

	ft_strncpy(dest, src, 4);
	printf("%s\n", dest);
}