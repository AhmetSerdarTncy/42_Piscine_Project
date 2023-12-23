/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 05:26:36 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/02/02 21:47:26 by ahtuncay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	sol;
	char	sag;

	sol = 0;
	sag = 0;
	while (sol < 99)
	{
		sag = sol + 1;
		while (sag <= 99)
		{
			ft_putchar(sol / 10 + '0');
			ft_putchar(sol % 10 + '0');
			ft_putchar(' ');
			ft_putchar(sag / 10 + '0');
			ft_putchar(sag % 10 + '0');
			sag++;
			if (sol != 98)
				write(1, ", ", 2);
		}
		sol++;
	}
}
