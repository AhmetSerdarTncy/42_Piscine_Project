/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etonbaz <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:19:06 by etonbaz           #+#    #+#             */
/*   Updated: 2023/02/25 00:19:08 by etonbaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret_val;
	int	i;

	if (min >= max)
		return (0);
	ret_val = malloc((max - min) * sizeof(int));
	if (ret_val == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		ret_val[i] = min;
		min++;
		i++;
	}
	return (ret_val);
}
