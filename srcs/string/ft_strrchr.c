/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:36:00 by lburnet           #+#    #+#             */
/*   Updated: 2020/11/27 12:33:35 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *p;
	char *lp;

	p = (char *)s;
	lp = NULL;
	while (*p != 0)
	{
		if (*p == (char)c)
			lp = p;
		p++;
	}
	if (*p == (char)c)
		lp = p;
	return (lp);
}
