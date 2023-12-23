/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etonbaz <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:19:46 by etonbaz           #+#    #+#             */
/*   Updated: 2023/02/25 00:19:48 by etonbaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		bound;
	int		i;
	int		*ret_val;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min - 1;
	ret_val = malloc(bound * sizeof(int));
	if (ret_val == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = ret_val;
	i = 0;
	while (i <= bound)
	{
		ret_val[i] = min + i;
		i++;
	}
	return (bound + 1);
}
