/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucille <lucille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:51:44 by lburnet           #+#    #+#             */
/*   Updated: 2020/12/02 14:16:37 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		count_nb_of_str(const char *str, char c)
{
	int nb_of_str;
	int i;

	nb_of_str = (str[0] != c) ? 1 : 0;
	i = 0;
	while (str[i] == c)
		i++;
	while (str[i] != 0)
	{
		if (str[i] != c && str[i - 1] == c)
			nb_of_str++;
		i++;
	}
	if (nb_of_str == 0 && str[i - 1] != c)
		nb_of_str++;
	return (nb_of_str);
}

static int				len_next_str(const char *str, char c)
{
	int j;

	j = 0;
	while (str[j] != c)
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

	if (!s)
		return (NULL);
	if (!(strs = malloc((count_nb_of_str(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < count_nb_of_str(s, c))
	{
		while (s[j] == c)
			j++;
		strs[i] = ft_substr(s, j, len_next_str(&s[j], c));
		if (strs[i] == NULL)
			return (free_all(strs, i));
		i++;
		j += len_next_str(&s[j], c);
	}
	strs[i] = NULL;
	return (strs);
}
