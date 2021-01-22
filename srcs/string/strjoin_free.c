/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:08:45 by lburnet           #+#    #+#             */
/*   Updated: 2021/01/15 14:28:44 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char			*strjoin_free(char *s1, char *s2)
{
	char	*r;

	if (!s1 || !s2)
		return (NULL);
	if (!(r = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char))))
		return (NULL);
	r[0] = 0;
	ft_strcat(r, s1);
	ft_strcat(r, s2);
	r[ft_strlen(r)] = 0;
	if (s1)
		free(s1);
	if (s2)
		free(s2);
	return (r);
}
