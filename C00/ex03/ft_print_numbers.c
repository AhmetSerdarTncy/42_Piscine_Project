/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 04:36:18 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/02/01 08:05:06 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	say;

	say = '0';
	while (say <= '9')
	{
		write(1, &say, 1);
		say++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
