/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:03:19 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/02/21 23:03:20 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}

int	main()
{
	ft_recursive_factorial(4);
}