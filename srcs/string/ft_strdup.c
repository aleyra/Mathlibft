/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:39:55 by lburnet           #+#    #+#             */
/*   Updated: 2020/11/30 12:03:00 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"//

static char		*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char			*ft_strdup(const char *src)
{
	char		*str;
	size_t		len_src;

	len_src = ft_strlen(src) + 1;
	if (!(str = (char *)malloc(len_src * sizeof(char))))
		return (NULL);
	ft_strcpy(str, src);
	if (str[len_src - 1] == 0)
		return (str);
	else
		return (NULL);
}
