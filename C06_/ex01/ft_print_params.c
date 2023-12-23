/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:40:16 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/02/23 16:58:34 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	if (ac >= 1)
	{
		while (av[j])
		{
			i = 0;
			while (av[j][i])
			{
				write (1, &av[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			j++;
		}
	}
	return (0);
}
