/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 20:46:38 by gduron            #+#    #+#             */
/*   Updated: 2017/04/10 19:03:53 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		is_printable(char c)
{
	return (!((c >= 0 && c <= 31) || c == 127) ? 1 : 0);
}

int				ft_isprint(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (!is_printable(*str++))
			return (0);
	}
	return (1);
}
