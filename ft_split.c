/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:51:44 by lburnet           #+#    #+#             */
/*   Updated: 2020/12/02 18:11:20 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		count_nb_of_str(char *str, char c)
{
	int nb_of_str;
	int i;

	nb_of_str = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && ++nb_of_str)
			while (str[i] && str[i] != c)
				i++;
		while (str[i] && str[i] == c)
			i++;
	}
	return (nb_of_str);
}

static int				len_next_str(char *str, char c)
{
	int j;

	j = 0;
	while (str[j] && str[j] != c)
		j++;
	return (j);
}

static char				**free_all(char **strs, int i)
{
	while (i-- > 0)
		free(strs[i]);
	free(strs);
	return (NULL);
}

char					**ft_split(const char *s, char c)
{
	char			**strs;
	unsigned int	i;
	unsigned int	j;
	char			*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	if (!(strs = malloc((count_nb_of_str(str, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < count_nb_of_str(str, c))
	{
		while (str[j] && str[j] == c)
			j++;
		strs[i] = ft_substr(str, j, len_next_str(&str[j], c));
		if (strs[i] == NULL)
			return (free_all(strs, i));
		i++;
		j += len_next_str(&str[j], c);
	}
	strs[i] = NULL;
	return (strs);
}
