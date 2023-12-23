/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etonbaz <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:18:29 by etonbaz           #+#    #+#             */
/*   Updated: 2023/02/25 00:18:32 by etonbaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		counter;
	char	*ret_val;

	counter = 0;
	while (src[counter])
		counter++;
	ret_val = malloc(sizeof(char) * (counter + 1));
	if (ret_val == NULL)
		return (0);
	counter = 0;
	while (src[counter])
	{
		ret_val[counter] = src[counter];
			counter++;
	}
	ret_val[counter] = '\0';
	return (ret_val);
}
