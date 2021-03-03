/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:43:35 by lburnet           #+#    #+#             */
/*   Updated: 2021/03/03 16:13:33 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(size_t v1, size_t v2)
{
	if (v1 < 0)
		return (v2);
	else if (v2 < 0)
		return (v1);
	else if (v1 <= v2)
		return (v1);
	else
		return (v2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*r;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	p = malloc((min(len, ft_strlen(s) - start) + 1) * sizeof(char));
	if (!(p))
		return (NULL);
	r = (char *)p;
	while (start-- > 0 && *s != 0)
		s++;
	while (len-- > 0 && *s != 0)
	{
		*p = *s;
		p++;
		s++;
	}
	*p = 0;
	return (r);
}
