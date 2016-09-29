/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweinste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 00:18:11 by lweinste          #+#    #+#             */
/*   Updated: 2016/09/28 20:16:58 by lweinste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*output;

	if (s == NULL || !s[0] || len == 0)
		return (NULL);
	i = 0;
	if ((output = ft_strnew(len)) == NULL)
		return (NULL);
	while (i < len && s[start])
		output[i++] = s[start++];
	return (output);
}
