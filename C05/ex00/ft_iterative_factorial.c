/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:03:02 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/02/21 23:03:02 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		x *= nb;
		nb--;
	}
	return (x);
}

int	main()
{
	ft_iterative_factorial(4);
}