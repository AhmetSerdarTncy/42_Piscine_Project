#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int	*********nbr)
{
	*********nbr = 42;
}

int    main(void)
{
    int    nc;
    int    *nbr1;
    int    **nbr2;
    int    ***nbr3;
    int    ****nbr4;
    int    *****nbr5;
    int    ******nbr6;
    int    *******nbr7;
    int    ********nbr8;
    int    *********nbr;
    
    nc = 12;
    nbr1 = &nc;
    nbr2 = &nbr1;
    nbr3 = &nbr2;
    nbr4 = &nbr3;
    nbr5 = &nbr4;
    nbr6 = &nbr5;
    nbr7 = &nbr6;
    nbr8 = &nbr7;
    nbr = &nbr8;
    printf("before function: %d \n", nc);
    ft_ultimate_ft(nbr);
    printf("after function: %d", nc);
}