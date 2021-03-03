/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:36:00 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/03 16:12:50 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	*lp;

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
