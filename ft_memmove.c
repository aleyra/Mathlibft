/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:13:02 by lburnet           #+#    #+#             */
/*   Updated: 2020/11/30 10:15:55 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (dest < src && (dest || src))
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (dest >= src && (dest || src))
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}
