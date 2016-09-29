/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweinste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 20:47:14 by lweinste          #+#    #+#             */
/*   Updated: 2016/09/26 16:18:46 by lweinste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	char			c;
	unsigned long	output;
	unsigned int	nextdigit;
	int				negative;

	c = *str;
	output = 0;
	negative = 1;
	while (c == ' ' || c == '\t' || c == '\v' ||
			c == '\f' || c == '\n' || c == '\r')
		c = *str++;
	if (c == '-')
	{
		negative = -1;
		c = *str++;
	}
	while ((c = *str++) != '\0')
	{
		if (c >= '0' && c <= '9')
			nextdigit = (unsigned int)(c - '0');
		else
			break ;
		output = ((output * 10) + nextdigit);
	}
	return ((int)output * negative);
}
