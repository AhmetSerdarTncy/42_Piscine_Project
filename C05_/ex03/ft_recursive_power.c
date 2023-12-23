/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunnu <nunnu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:16:13 by nunnu             #+#    #+#             */
/*   Updated: 2022/10/30 12:19:45 by nunnu            ###   ########.tr       */
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
