/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweinste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 17:22:56 by lweinste          #+#    #+#             */
/*   Updated: 2016/09/26 18:11:57 by lweinste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*output;
	size_t	i;

	i = 0;
	if ((output = (char *)malloc((size + 1) * sizeof(char))) == NULL)
		return (NULL);
	output[i] = 0;
	while (i++ < size - 1)
		output[i] = 0;
	output[i] = '\0';
	return (output);
}
