#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}


int    main(void)
{
    int    *a;
    int    number;

    number = 7;
    a = &number;
    printf("before function: %d\n", number);
    ft_ft(a);
    printf("after function: %d", number);
}