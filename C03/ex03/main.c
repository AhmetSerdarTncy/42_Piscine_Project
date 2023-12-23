#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char src[12] = "42222";
	char dest[12] = "Ecole";
	printf("%s\n", ft_strncat(dest, src, 2));
}