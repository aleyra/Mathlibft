/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:10:39 by lburnet           #+#    #+#             */
/*   Updated: 2020/11/30 11:05:25 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (n == 0)
		return (NULL);
	while (n-- && *s != (unsigned char)c)
	{
		*d++ = *s++;
	}
	if (*d == (unsigned char)c)
		return (++d);
	else
	{
		*d = *s;
		return (NULL);
	}
}
