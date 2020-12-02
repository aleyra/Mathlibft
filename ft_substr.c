/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:43:35 by lburnet           #+#    #+#             */
/*   Updated: 2020/12/02 10:40:05 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*r;

	if (!s)
		return (NULL);
	if (!(p = malloc((len + 1) * sizeof(char))))
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
