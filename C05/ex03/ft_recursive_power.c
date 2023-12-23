/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:03:30 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/02/21 23:03:30 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power <= -1)
		return (0);
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power -1)));
	else
		return (nb);
}

int	main()
{
	ft_recursive_power(4, 3);
}