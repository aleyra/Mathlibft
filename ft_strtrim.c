/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:25:39 by lburnet           #+#    #+#             */
/*   Updated: 2020/11/27 15:13:22 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

size_t		strlen_f_trimmed(const char *s1, const char *set)
{
	size_t		j;
	size_t		len;
	int			non_set;

	len = ft_strlen(s1);
	non_set = 0;
	while (non_set == 0 && *s1 != 0)
	{
		j = 0;
		while (set[j] != 0)
		{
			if (*s1 != set[j])
			{
				j++;
				non_set = (set[j] == 0) ? 1 : 0;
			}
			else
			{
				len--;
				j = ft_strlen(set);
			}
		}
		s1++;
	}
	return (len);
}

size_t		strlen_b_trimmed(const char *s1, const char *set, size_t len)
{
	size_t		i;
	size_t		j;
	int			non_set;

	i = ft_strlen(s1) - 1;
	non_set = 0;
	while (non_set == 0 && s1[i] && len != 0)
	{
		j = 0;
		while (set[j] != 0)
		{
			if (s1[i] != set[j])
			{
				j++;
				non_set = (set[j] == 0) ? 1 : 0;
			}
			else
			{
				len--;
				j = ft_strlen(set);
			}
		}
		i--;
	}
	return (len);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char		*r;
	int			i;
	size_t		j;
	size_t		isset;
	size_t		k;

	k = strlen_b_trimmed(s1, set, strlen_f_trimmed(s1, set));
	if (!(r = malloc((k + 1) * sizeof(char))))
		return (NULL);
	isset = 1;
	i = 0;
	while (isset == 1)
	{
		j = 0;
		isset = 0;
		while (set[j] != 0 && isset == 0)
		{
			isset = (s1[i] == set[j]) ? 1 : 0;
			j += (s1[i] != set[j]) ? 1 : 0;
		}
		i++;
	}
	r = ft_strncpy(r, &s1[i - 1], k);
	r[k] = 0;
	return (r);
}
