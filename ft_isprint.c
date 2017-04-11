/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 20:46:38 by gduron            #+#    #+#             */
/*   Updated: 2017/04/11 20:32:21 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		is_printable(char c)
{
	return ((c >= 32 && c <= 126) ? 1 : 0);
}

int				ft_isprint(int c)
{
	if (!is_printable(c))
		return (0);
	return (1);
}
