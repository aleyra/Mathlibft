/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:43:35 by lburnet           #+#    #+#             */
/*   Updated: 2020/12/09 12:49:10 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t v1, size_t v2)
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

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*r;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (!(p = malloc((ft_min(len, ft_strlen(s) - start) + 1) * sizeof(char))))
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
