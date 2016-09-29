/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweinste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 10:17:23 by lweinste          #+#    #+#             */
/*   Updated: 2016/09/26 16:07:37 by lweinste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char *b;
	const char *l;

	b = big;
	l = little;
	if (*l == '\0' || l == NULL)
		return ((char *)big);
	while (*big)
	{
		l = little;
		while (*l && (*l == *b))
		{
			if (len == 0)
				return (NULL);
			b++;
			l++;
			len--;
		}
		if (!*l)
			return ((char *)big);
		big++;
		b = big;
	}
	return (NULL);
}
