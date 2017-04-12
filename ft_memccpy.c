/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 11:24:31 by gduron            #+#    #+#             */
/*   Updated: 2017/04/12 16:52:44 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;
	size_t			i;

	dst_tmp = dst;
	src_tmp = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		if (src_tmp[i] == (unsigned char)c)
			return (&dst[i + 1]);
		dst_tmp[i] = src_tmp[i];
		i++;
	}
	return (0);
}
