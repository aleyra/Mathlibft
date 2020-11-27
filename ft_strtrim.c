/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:25:39 by lburnet           #+#    #+#             */
/*   Updated: 2020/11/25 16:38:18 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	strlen_without_set(const char *s1, const char *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = ft_strlen(s1);
	while (s1[i] != 0)
	{
		j = 0;
		while (set[j] != 0)
		{
			if (s1[i] != set[j])
				j++;
			else
			{
				k--;
				j = ft_strlen(set);
			}
		}
		i++;
	}
	return (k);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char			*r;
	unsigned int	j;
	unsigned int	isset;
	unsigned int	k;

	k = strlen_without_set(s1, set);
	if (!(r = malloc((k + 1) * sizeof(char))))
		return (NULL);
	k = 0;
	while (*s1 != 0)
	{
		j = 0;
		isset = 0;
		while (set[j] != 0 && isset == 0)
		{
			isset = (*s1 == set[j]) ? 1 : 0;
			j += (*s1 != set[j]) ? 1 : 0;
		}
		if (isset == 0)
			r[k++] = *s1;
		s1++;
	}
	r[k] = 0;
	return (r);
}
