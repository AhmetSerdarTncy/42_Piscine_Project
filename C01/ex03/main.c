#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int *a, int *b, int div, int mod)
{
	if (b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
	}
}

int    main(void)
{
    int    a;
    int    b;
    int    *div;
    int    *mod;

    div = &a;
    mod = &b;
    a = 56;
    b = 6;
    ft_div_mod(&a, &b, div, mod);
    printf("Division = %d\n", *div);
    printf("Mod = %d", *mod);
}