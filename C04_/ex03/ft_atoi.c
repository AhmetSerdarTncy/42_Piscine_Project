/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:08:44 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/02/19 19:36:02 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	number;

	i = 0;
	nb = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nb = -nb;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	return (nb * number);
}
