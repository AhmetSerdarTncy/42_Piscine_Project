#include <unistd.h>

void	ft_putstr(char	*str)
{
	char	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int    main(void)
{
    char    *e;

    e = "ecole42";
    ft_putstr(e);
    return (0);
}