#include <unistd.h>
#include <stdio.h>

void    ft_ultimate_div_mod(char *a, char *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
int    main(void)
{
    char    a;
    char    b;

    a = 42;
    b = 5;
    ft_ultimate_div_mod(&a, &b);
    printf("Division = %d\n", a);
    printf("Mod = %d", b);
}