/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etonbaz <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:20:33 by etonbaz           #+#    #+#             */
/*   Updated: 2023/02/25 00:20:36 by etonbaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

void	ft_strjoin_sup(char *ret_val, char **strs, char *sep, int size)
{
	int	counter;
	int	counter2;
	int	len;

	counter = 0;
	len = 0;
	while (counter < size)
	{
		counter2 = 0;
		while (strs[counter][counter2])
		{
			ret_val[len] = strs[counter][counter2];
			counter2++;
			len++;
		}
		counter2 = 0;
		while (sep[counter2] && counter + 1 != size)
		{
			ret_val[len] = sep[counter2];
			len++;
			counter2++;
		}
		counter++;
	}	
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int				counter;
	unsigned int	len;
	char			*ret_val;

	counter = 0;
	len = 0;
	while (counter < size)
	{
		len += ft_strlen(strs[counter]);
		if (counter + 1 != size)
			len += ft_strlen(sep);
			counter++;
	}
	ret_val = malloc(sizeof(char) * (len + 1));
	ret_val[len] = 0;
	ft_strjoin_sup(ret_val, strs, sep, size);
	return (ret_val);
}
