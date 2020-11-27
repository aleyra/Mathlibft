/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:13:02 by lburnet           #+#    #+#             */
/*   Updated: 2020/11/24 15:21:11 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned char *d;
	unsigned char *s;
	unsigned char *od;
	unsigned char *os;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	od = d + n - 1;
	os = s + n - 1;
	if (d < s)
	{
		ft_memcpy(d, s, n);
	}
	else
	{
		ft_memcpy(od, os, n);
	}
	return (dest);
}
