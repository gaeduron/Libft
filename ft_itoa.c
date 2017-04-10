/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 19:24:06 by exam              #+#    #+#             */
/*   Updated: 2017/03/24 19:51:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int nbr_len(int nbr)
{
	int res = 0;
	if (nbr < 0)
		res++;
	while (nbr)
	{
		nbr = nbr / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int nbr)
{
	char *str;
	int i = 0;

	if ((str = (char *)malloc(sizeof(char) * (nbr_len(nbr) + 1))) == NULL)
		return (0);
	i = nbr_len(nbr);
	str[i--] = 0;
	if (nbr > 0)
	{
		while (i >= 0)
		{
			str[i--] = nbr % 10 + '0';
			nbr = nbr / 10;
		}
	}
	if (nbr < 0)
	{
		nbr = nbr * -1;
		while (i > 0)
		{
			str[i--] = nbr % 10 + '0';
			nbr = nbr / 10;
		}
		str[0] = '-';
	}

	return (str);
}
